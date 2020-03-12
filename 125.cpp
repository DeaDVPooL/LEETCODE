class Solution {
public:
    bool isPalindrome(string s) {
        for(auto it = s.begin();it!=s.end();)
        {
            if(isalpha(*it))    *it = tolower(*it);
            if(!isdigit(*it)&&!isalpha(*it))    s.erase(it);
            else it++;
        }
        int len = s.size();
        bool flag = true;
        if(len==0)  return true;
        for(int i=0;i<len/2;i++)
        {
            if(s[i]!=s[len-i-1])
            {
                flag = false;
                break;
            }
        }
        return flag;
    }
};
