class Solution {
public:
    string removeDuplicates(string S) {
        stack<char> s;
        for(int i=0;i<S.size();i++)
        {
            if(!s.empty()&&S[i]==s.top())   s.pop();
            else s.push(S[i]);
        }
        string ans = "";
        while(!s.empty())
        {
            ans+=s.top();
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
