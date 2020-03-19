class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> cnt;
        for(int i=0;i<s.size();i++) cnt[s[i]]++;
        for(int i=0;i<t.size();i++)
        {
            if(cnt[t[i]]==0)    return t[i];
            else cnt[t[i]]--;
        }
        return 'a';
    }
};
