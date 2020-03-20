class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans(n);
        for(int i=1;i<=n;i++)
        {
            string tmp = "";
            if(i%3==0)  tmp+="Fizz";
            if(i%5==0)  tmp+="Buzz";
            if(i%3!=0&&i%5!=0)  tmp+=to_string(i);
            ans[i-1] = tmp;
        }
        return ans;
    }
};
