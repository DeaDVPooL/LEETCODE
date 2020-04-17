class Solution {
public:
    string removeOuterParentheses(string S) {
        int l = 0;
        string ans = "";
        for(int i=0;i<S.size();i++)
        {
            if(l==0)    {l++;continue;}
            if(S[i]=='(')   l++;
            else if(S[i]==')')  l--;
            if(l!=0)    ans+=S[i];    
        }
        return ans;
    }
};
