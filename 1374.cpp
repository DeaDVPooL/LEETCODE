class Solution {
public:
    string generateTheString(int n) {
        string ans = "";
        if(n%2==1)  
        {
            n--;
            ans+="a";
        }
        if(n==0)    return ans;
        ans+="b";
        for(int i=0;i<n-1;i++)  ans+="c";
        return ans;
    }
};
