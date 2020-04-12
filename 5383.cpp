class Solution {
public:
    int numOfWays(int n) {
        vector<long long> dp(n);
        dp[0] = 12;
        long long v121 = 6,v123 = 6;
        for(int i=1;i<n;i++)
        {
            v121%=1000000007;
            v123%=1000000007;
            dp[i] = v121*5+v123*4;
            long long tmp = v121;
            v121 = v121*3+v123*2;
            v123 = tmp*2+v123*2;
        }
        return dp[n-1]%1000000007;
    }
};
