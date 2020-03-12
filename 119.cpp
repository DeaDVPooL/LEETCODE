class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> dp;
        dp.resize(rowIndex+1);
        for(int i=0;i<=rowIndex;i++)  dp[i].resize(i+1);
        for(int i=1;i<=rowIndex+1;i++)
        {
            dp[i-1][0] = dp[i-1][i-1] = 1;
            for(int j=1;j<i-1;j++)  dp[i-1][j] = dp[i-2][j-1]+dp[i-2][j];
        }
        vector<int> ans(dp[rowIndex]);
        return ans;
    }
};
