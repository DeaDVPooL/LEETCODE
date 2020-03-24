class Solution {
public:
    bool checkRecord(string s) {
        int flag1 = 1,flag2 = 1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A')    flag1--;
            if(i<s.size()-1&&flag2&&s[i]=='L'&&s[i+1]=='L'&&s[i+2]=='L')    flag2 = 0;
        }
        if(flag1>=0&&flag2)  return true;
        return false;
    }
};
