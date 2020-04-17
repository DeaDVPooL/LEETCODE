class Solution {
public:
    int largestSumAfterKNegations(vector<int>& A, int K) {
        priority_queue<int,vector<int>,greater<int> > q;
        for(int i=0;i<A.size();i++) q.push(A[i]);
        while(K--)
        {
            int tmp = q.top();
            q.pop();
            tmp = -tmp;
            q.push(tmp);
        }
        int sum = 0;
        while(!q.empty())
        {
            sum+=q.top();
            q.pop();
        }
        return sum;
    }
};
