class Solution {
public:
    string convertToBase7(int num) {
        if(num==0)  return "0";
        string ans = "";
        int flag = 1;
        if(num<0)
        {
            flag = 0;
            num = -num;
        }
        while(num!=0)
        {
            ans+=to_string(num%7);
            num/=7;
        }
        reverse(ans.begin(),ans.end());
        if(!flag)   ans = "-"+ans;
        return ans;
    }
};
