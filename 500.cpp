class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string s1 = "QWERTYUIOPqwertyuiop", s2 = "ASDFGHJKLasdfghjkl", s3 = "ZXCVBNMzxcvbnm";
        vector<string> ans;
        unordered_map<char,int> dict;
        for(int i=0;i<s1.size();i++)    dict[s1[i]] = 1;
        for(int i=0;i<s2.size();i++)    dict[s2[i]] = 2;
        for(int i=0;i<s3.size();i++)    dict[s3[i]] = 3;
        for(int i=0;i<words.size();i++)
        {
            int tmp = dict[words[i][0]],flag = 1;
            for(int j=1;j<words[i].size();j++)
                if(dict[words[i][j]] != tmp)    flag = 0;
            if(flag)    ans.push_back(words[i]);
        }
        return ans;
    }
};
