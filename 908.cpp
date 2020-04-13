class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
         int minn = A[0], maxn = A[0];
         for (int x: A) {
            minn = min(minn, x);
            maxn = max(maxn, x);
        }
        return max(0, maxn - minn - 2*K);
    }
};
