class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        set<int> s;
        int first = 1,second = 1,flag = 0;
        for(int i=0;;i++)
        {
            if(flag)    break;
            second = 1;
            for(int j=0;;j++)
            {
                if(first+second<=bound) s.insert(first+second);
                else
                {
                    if(j==0)    flag = 1;
                    break;
                }
                if(y==1)    break;
                second*=y;
            }
            if(x==1||first>bound)    break;
            first*=x;
        }
        vector<int> ans;
        for(auto i : s)  ans.push_back(i);
        return ans;
    }
};
