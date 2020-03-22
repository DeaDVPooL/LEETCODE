class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num<=0)   return false;
        int q = sqrt(num),sum = -num;
        if(q*q==num)    sum-=q;
        for(int i=1;i<=q;i++)
            if(num%i==0)    sum+=num/i+i;
        return sum==num?true:false;
    }
};
