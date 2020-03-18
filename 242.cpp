class Solution {
public:
    bool isAnagram(string s, string t) {
        int lens = s.size(),lent = t.size();
        if(lens!=lent)  return false;
        unordered_map<char,int> cnt1;
        unordered_map<char,int> cnt2;
        for(int i=0;i<lens;i++)
        {
            cnt1[s[i]]++;
            cnt2[t[i]]++;
        }
        for(auto it=cnt1.begin();it!=cnt1.end();it++)
        {
            if(it->second!=cnt2[it->first]) return false;
        }
        return true;
    }
};
