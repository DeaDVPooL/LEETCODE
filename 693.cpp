class Solution {
public:
    bool hasAlternatingBits(int n) {
        int tmp1,tmp2;
        while(n!=0)
        {
            tmp1 = n&1;
            tmp2 = (n&2)>>1;
            if(tmp1==tmp2)  return false;
            n = n>>1;  
        }
        return true;
    }
};
