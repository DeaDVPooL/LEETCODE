class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int,int> cnt;
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==10)
                if(cnt[5]<0)    return false;
                else cnt[5]--;
            else if(bills[i]==20)
            {
                if(cnt[10]>0&&cnt[5]>0)
                {
                    cnt[10]--;
                    cnt[5]--;
                }else if(cnt[10]==0&&cnt[5]>=3) cnt[5]-=3;
                else return false;
            }
            cnt[bills[i]]++;  
        }
        return true;
    }
};
