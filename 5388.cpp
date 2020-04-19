class Solution {
public:
    string reformat(string s) {
        vector<int> digit,ch;
        for(int i=0;i<s.size();i++)
        {
            if(isdigit(s[i]))   digit.emplace_back(s[i]);
            else ch.emplace_back(s[i]);
        }
        string ans = "";
        if(labs(digit.size()-ch.size())>1)   return ans;
        if(digit.size()>=ch.size())
        {
            int index=0;
            while(index<ch.size())
            {
                ans+=digit[index];
                ans+=ch[index];
                index++;
            }
            if(index<digit.size())  ans+=digit[index];
        }else
        {
            int index=0;
            while(index<digit.size())
            {
                ans+=ch[index];
                ans+=digit[index];
                index++;
            }
            if(index<ch.size())  ans+=ch[index];
        }
        return ans;
    }
};
