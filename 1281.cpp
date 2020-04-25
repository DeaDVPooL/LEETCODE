class Solution {
public:
    int subtractProductAndSum(int n) {
        vector<int> arr;
        while(n!=0)
        {
            arr.emplace_back(n%10);
            n/=10;
        }
        int mul = 1,sum = 0;
        for(int i : arr)
        {
            mul*=i;
            sum+=i;
        }
        return mul-sum;
    }
};
