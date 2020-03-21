class Solution {
public:
    int findComplement(int num) {
        int sum = 0;
        long long tmp = 1;
        while(tmp<num)
        {
            sum+=(num&tmp)^tmp;
            tmp = tmp<<1;
        }
        return sum;
    }
};
