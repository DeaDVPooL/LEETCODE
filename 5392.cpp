class Solution {
public:
    int maxScore(string s) {
        int even = 0,odd = 0,ans = 0;
        for(int i=0;i<s.size();i++)
            if((s[i]-'0')==1) odd++;
        for(int i=0;i<s.size()-1;i++)
        {
            if((s[i]-'0')==0) even++;
            else odd--;
            ans = max(ans,even+odd);
        }
        return ans;
    }
};
