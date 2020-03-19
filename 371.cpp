class Solution {
public:
    int getSum(int a, int b) {
        int carry = unsigned(a&b)<<1;
        int result = a^b;
        while(carry!=0)
        {
            int tmp = carry;
            carry = unsigned (tmp&result)<<1;
            result = result^tmp;
        }
        return result;
    }
};
