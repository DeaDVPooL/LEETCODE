class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int N = arr.size();
        if(N==1)    return arr[0];
        vector<int> dp1(N);
        vector<int> dp2(N);
        dp1[0] = arr[0];
        for(int i=1;i<N;i++)
        {
            dp1[i] = max(arr[i],dp1[i-1]+arr[i]);
        }
        dp2[0] = arr[0];
        dp2[1] = max(arr[0],arr[1]);
        for(int i=2;i<N;i++)
        {
            dp2[i] = max(dp1[i-1],dp2[i-1]+arr[i]);
        }
        int ans = INT_MIN;
        for(int i=0;i<N;i++)
        {
            ans = max(ans,dp1[i]);
            ans = max(ans,dp2[i]);
        }
        return ans;
    }
};
