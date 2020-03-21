class Solution {
public:
    string licenseKeyFormatting(string S, int K) {
        string ans = "";
        int cnt = K;
        for(int i=S.size()-1;i>=0;i--) 
        {
            if(S[i]=='-')   continue;
            if(cnt==0) 
            {
                ans+='-';
                ans+=toupper(S[i]);
                cnt=K-1;
            } 
            else
            {
                cnt--;
                ans+=toupper(S[i]);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
