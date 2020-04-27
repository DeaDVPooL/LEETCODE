class Solution {
public:
    int numberOfSteps (int num) {
        int k = 0;
        while(num > 0){
            num%2==0?num/=2:num-=1;
            k++;
        }
        return k;
    }
};
