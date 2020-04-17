class Solution {
public:
    int bitwiseComplement(int N) {
        if(N==0||N==1)    return 1-N;
        int up = 1;
        while(N>=up) up*=2;
        return up-1-N;
    }
};
