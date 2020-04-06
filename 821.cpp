class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        int len = S.size();
        vector<int> ans(len);
        int left = INT_MIN/2,right = INT_MAX/2;
        for(int i=0;i<len;i++)
        {
            if(S[i]==C) left = i;
            ans[i] = i-left;
        }
        for(int i=len-1;i>=0;i--)
        {
            if(S[i]==C) right = i;
            ans[i] = min(ans[i],right-i);
        }
        return ans;
    }
};
