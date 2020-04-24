class Solution {
public:
    int balancedStringSplit(string s) {
        int cnt = 0;
        int balance = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'L') balance --;
            if(s[i] == 'R') balance ++;
            if(balance == 0) cnt ++;
        }
        return cnt;
    }
};
