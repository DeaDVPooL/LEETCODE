class Solution {
public:
    stack<char> mystack;
    bool isValid(string s) {
        int len = s.size();
        if(len%2==1)    return false;
        for(int i=0;i<len;i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[') mystack.push(s[i]);
            else
            {
                if(mystack.size()==0) return false;
                char tmp = mystack.top();
                if(s[i]-1!=tmp&&s[i]-2!=tmp)    return false;
                mystack.pop();
            }
        }
        if(mystack.size()!=0)   return false;
        return true;
    }
};
