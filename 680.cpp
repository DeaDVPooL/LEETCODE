class Solution {
public:
    bool ishuiwen(string s)
    {
        for(int i=0;i<s.size()/2;i++)
        {
            if(s[i]!=s[s.size()-1-i])   return false;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int l = 0,r = s.size()-1,flag = 0;
        while(l<r)
        {
            if(s[l]!=s[r])
            {
                string tmp1 = s;
                string tmp2 = s;
                if(ishuiwen(tmp1.erase(l,1))||ishuiwen(tmp2.erase(r,1))) return true;
                return false;
            }else
            {
                l++;
                r--;
            }
        }
        return true;
    };
};
