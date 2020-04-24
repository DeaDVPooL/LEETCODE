class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> cnt;
        int ans = INT_MAX;
        for(int i=0;i<text.size();i++)  cnt[text[i]]++;
        string s = "balloon";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='o'||s[i]=='l')    ans = min(ans,cnt[s[i]]/2);
            else ans = min(ans,cnt[s[i]]);
        }
        return ans;
    }
};
