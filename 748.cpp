class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        unordered_map<int,int> cnt;
        int flag = 1;
        string ans;
        for(int i=0;i<licensePlate.size();i++)
        {
            if(!isalpha(licensePlate[i]))   continue;
            cnt[tolower(licensePlate[i])]++;
        }
        for(string s : words)
        {
            flag = 1;
            unordered_map<int,int> cnt1;
            for(char c : s) cnt1[tolower(c)]++;
            for(auto it=cnt.begin();it!=cnt.end();it++)
            {
                if(it->second>cnt1[it->first])
                {
                    flag = 0;
                    break;
                }
            }
            if(flag&&(ans.size()==0||ans.size()>s.size()))  ans = s;
        }
        return ans;
    }
};
