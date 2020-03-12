class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        if(numRows==0)  return ans;
        ans.resize(numRows);
        for(int i=0;i<numRows;i++)  ans[i].resize(i+1);
        for(int i=1;i<=numRows;i++)
        {
            ans[i-1][0] = ans[i-1][i-1] = 1;
            for(int j=1;j<i-1;j++)  ans[i-1][j] = ans[i-2][j-1]+ans[i-2][j];
        }
        return ans;
    }
};
