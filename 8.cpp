class Solution {
public:
    int myAtoi(string str) {
        int index = 0,flag = 0;
        if(str=="") return 0;
        while(index<str.size()&&str[index]==' ')  index++;
        if(index==str.size()) return 0;
        if(str[index]=='+') {flag = 0;index++;}
        else if(str[index]=='-')    {flag = 1;index++;}
        else if(!isdigit(str[index]))   return 0;
        long long ans = 0;
        while(index<str.size()&&isdigit(str[index]))
        {
            if(ans>INT_MAX||ans<INT_MIN) break;
            ans*=10;
            ans+=(str[index]-'0');
            index++;
        }
        ans*= flag==1?-1:1;
        if(ans>INT_MAX) return INT_MAX;
        else if(ans<INT_MIN)    return INT_MIN;
        else return ans;
    }
};
