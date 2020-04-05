class Solution {
public:
    int numJewelsInStones(string J, string S) {
        set<char> jewels;
        int cnt = 0;
        for(char c : J)    jewels.insert(c);
        for(char c : S)
            if(jewels.count(c)==1)  cnt++;
        return cnt;
    }
};
