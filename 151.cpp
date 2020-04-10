class Solution {
public:
    vector<string> split(string s)
    {
        vector<string> ans;
        string tmp;
        int index = 0;
        while(index<s.size())
        {
            tmp = "";
            while(index<s.size()&&s[index]==' ')    index++;
            if(index==s.size()) break;
            while(s[index]!=' '&&index<s.size())   tmp+=s[index++];
            if(tmp!="") ans.push_back(tmp);
        }
        return ans;
    }
    string reverseWords(string s) {
        string ans = "";
        vector<string> tmp (split(s));
        for(int i=tmp.size()-1;i>=0;i--)    ans += i==0?tmp[i]:(tmp[i]+" ");
        return ans;
    }
};
