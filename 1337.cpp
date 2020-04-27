class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> ans;
        for(int i=0;i<=mat[0].size();i++)
        {
            for(int j=0;j<mat.size();j++)
            {
                if(k==0) break;
                if((i==0&&mat[j][i]==0)||(i>0&&i<mat[0].size()&&mat[j][i-1]==1&&mat[j][i]==0)||(i==mat[0].size()&&mat[j][i-1]==1)) 
                {
                    k--;
                    ans.emplace_back(j);
                } 
            }
        }
        return ans;
    }   
};
