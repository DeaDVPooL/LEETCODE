class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
        int sum = 0;
        vector<int> ans;
        for(int i=0;i<A.size();i++) 
            if(A[i]%2==0)   sum+=A[i];
        for(int i=0;i<queries.size();i++)
        {
            int flag1 = A[queries[i][1]]%2;
            int flag2 = queries[i][0]%2;
            if(!flag1&&flag2)  sum-=A[queries[i][1]];
            else if(flag1&&flag2)   sum+=A[queries[i][1]]+queries[i][0];
            else if(!flag1&&!flag2) sum+=queries[i][0];
            ans.emplace_back(sum);
            A[queries[i][1]]+=queries[i][0];
        }
        return ans;
    }
};
