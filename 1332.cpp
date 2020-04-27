class Solution {
public:
    int removePalindromeSub(string s) {
        if (s.empty()) return 0;
        string tmp = s;
        reverse(s.begin(), s.end());
        if (s == tmp) return 1;
        return 2;
    }
};
