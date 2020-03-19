class Solution {
public:
    set<char> S{'a','e','i','o','u','A','E','I','O','U'};
    string reverseVowels(string s) {
        int len = s.size();
        int lo = 0,hi = len-1;
        while(lo<hi)
        {
            while(lo<len-1&&S.count(s[lo])==0)   lo++;
            while(hi>0&&S.count(s[hi])==0)   hi--;
            if(lo>=hi)  break;
            //if(s[lo]==s[hi])    continue;
            char tmp = s[hi];
            s[hi] = s[lo];
            s[lo] = tmp;
            lo++;
            hi--;
        }
        return s;
    }
};
