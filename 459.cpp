class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int slen = s.size();
        for(int len = 1; len <= slen / 2; len++) {
            if(slen % len != 0)
                continue;
            string sub1 = s.substr(0, len);
            int flag = 0;
            for(int i = len; i < slen; i += len) {
                string sub2 = s.substr(i, len);
                if(sub1 != sub2) {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
                return true;
        }
        return false;
    }
};
