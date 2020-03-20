class Solution {
public:
    string toHex(int num) {
        string result = "", s = "0123456789abcdef";
        for(int i = 1; i <= 8; i++) {
            result += s[num & 15];
            num = num >> 4;
        }
        reverse(result.begin(), result.end());
        while(result.length() > 1 && result[0] == '0')
            result = result.substr(1);
        return result;
    }
};
