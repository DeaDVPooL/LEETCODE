题目大意：给两个数L和R，在[L, R]区间寻找数字的二进制中1的个数是素数的数字个数
分析：R不超过10的6次方，也就是不超过2的20次方，那么判断是否为素数只需判断是否等于2 3 5 7 11 13 17 19即可，用bitset也只需20位表示即可，用count函数计算1的个数，然后用cnt统计后返回～

class Solution {
public:
    int countPrimeSetBits(int L, int R) {
        int cnt = 0, hash[20] = {0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1};
        for (int i = L; i <= R; i++) {
            bitset<20> b(i);
            if(hash[b.count()]) cnt++;
        }
        return cnt;
    }
};
