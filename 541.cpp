class Solution {
public:
    string reverseStr(string s, int k) {
        string ans = "";
        for(int i=0;i<s.size();i+=2*k)
        {
            int tmp = i+k>s.size()?s.size():i+k;
            for(int j=i;j<tmp;j++)
            {
                ans+=s[tmp-1-j+i];
            }
            if(tmp==s.size())   break;
            for(int j=tmp;j<s.size()&&j<tmp+k;j++)
            {
                ans+=s[j];
            }
        }
        return ans;
    }
};
