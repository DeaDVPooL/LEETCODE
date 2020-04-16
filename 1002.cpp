class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        vector<int> dict(26);
        for(int i=0;i<A.size();i++)
        {
            vector<int> tmp(26);
            for(int j=0;j<A[i].size();j++)
            {
                if(i==0)    dict[A[i][j]-'a']++;
                else tmp[A[i][j]-'a']++;
            }
            if(i!=0)
                for(int j=0;j<26;j++)   dict[j] = min(dict[j],tmp[j]);
        }
        vector<string> ans;
        for(int i=0;i<26;i++)
        {
            if(dict[i]!=0)
            {
                for(int j=0;j<dict[i];j++)
                {
                    string tmp = "";
                    tmp+=i+'a';
                    ans.emplace_back(tmp);
                }
            }
        }
        return ans;
    }
};
