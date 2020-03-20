class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans = "";
        int i = num1.size()-1,j = num2.size()-1,carry = 0;
        while(i>=0||j>=0)
        {
            int n1 = i>=0?num1[i]-'0':0;
            int n2 = j>=0?num2[j]-'0':0;
            int tmp = n1+n2+carry;
            carry = tmp/10;
            ans+=(tmp%10)+'0';
            i--;
            j--;
        }
        if(carry>0) ans+=(carry+'0');
        reverse(ans.begin(),ans.end());
        return ans;
    }
    
};
