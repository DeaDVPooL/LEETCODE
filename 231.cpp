class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long a = 1;
        while(a<=n)
        {
            if(a==n)    return true;
            if(a*2>0)   a*=2;
            else return false;
        }
        return false;
    }
};
