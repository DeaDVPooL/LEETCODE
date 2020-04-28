class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int res=-1;
        int sum=0;
        for(auto x:nums){
            sum+=x;
            if(sum<0&&sum-1<res){
                res=sum-1;
            }
        }
        return -res;
    }
};
