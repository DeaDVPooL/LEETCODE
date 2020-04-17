class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) {
        int len = A.size();
        vector<bool> ans(len,false);
        int sum = 0;
        for(int i=0;i<len;i++)
        {
            sum = sum<<1;
            if(sum>=10) sum-=10;
            sum+=A[i];
            if(sum%5==0)    ans[i] = true;
        }
        return ans;
    }
};
