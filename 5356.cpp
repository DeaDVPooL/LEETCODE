class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> ans;
        for(int i=0;i<matrix.size();i++)
        {
            int min = 1000000000,minc = 0,flag = 1;
            for(int j=0;j<matrix[i].size();j++)
            {
                if(min>matrix[i][j])
                {
                    minc = j;
                    min = matrix[i][j];
                }
            }
            for(int j=0;j<matrix.size();j++)
            {
                if(matrix[j][minc]>min)
                {
                    flag = 0;
                    break;
                }
            }
            if(flag)    ans.push_back(matrix[i][minc]);
        }
        return ans;
    }
};
