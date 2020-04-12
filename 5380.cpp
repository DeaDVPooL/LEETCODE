class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        unordered_set<string> ans;
        vector<string> v;
        for(int i=0;i<words.size();i++)
        {
            for(int j=0;j<words.size();j++)
            {
                if(i==j)    continue;
                if(words[i].find(words[j])!=string::npos) ans.insert(words[j]);
            }
        }
        for(auto it : ans)  v.push_back(it);
        return v;
    }
};
