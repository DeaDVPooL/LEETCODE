class Solution {
public:
    bool judgeSquareSum(int c) {
        for(int i=0;i<=sqrt(c);i++)
        {
            int a = sqrt(c-i*i);
            if(a*a==c-i*i)  return true;
        }
        return false;
    }
};
