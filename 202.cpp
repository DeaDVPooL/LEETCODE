class Solution {
public:
    int func(int n)
    {
        int sum = 0;
        while(n!=0)
        {
            sum+=(n%10)*(n%10);
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_map<int,int> dict;
        while(!dict[n])
        {
            if(n==1)    return true;
            dict[n] = 1;
            n = func(n);
        }
        return false;
    }
};
