class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        int lens = s.size(),lent = t.size();
        while(i<lens&&j<lent)
        {
            if(s[i]==t[j])
            {
                i++;
                j++;
            }
            else j++;
        }
        return i==lens;
    }
};
