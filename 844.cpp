class Solution {
public:
    string func(string s)
    {
        string ans = "";
        int cnt = 0,i = s.size()-1;
        while(i>=0)
        {
            while(i>=0&&s[i]=='#')   
            {
                cnt++;
                i--;
            }
            if(i==-1)    break;
            if(cnt==0)  ans+=s[i--];
            else
            {
                cnt--;
                i--;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    bool backspaceCompare(string S, string T) {
        string s1 = func(S);
        string s2 = func(T);
        return s1==s2;
    }
};
