class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int len =nums.size();
        int num_min=INT_MAX;
        int num_max=INT_MIN;
        //一次扫描，同时求出无序子数组中最小元素和最大元素
        for(int i=0;i<len-1;i++){
            if(nums[i+1]<nums[i]){
                num_min=min(nums[i+1],num_min);
                num_max=max(nums[i],num_max);
            }
        }
        //确定最小元素的正确位置
        int l=0;
        for(int i=0;i<len-1;i++){
            if(nums[i]>num_min) {
                l=i;
                break;
            }
        }
        //确定最大元素的正确位置
        int r=0;
        for(int i=len-1;i>-1;i--){
            if(nums[i]<num_max){
                 r=i;
                 break;
            }
        }
        //返回结果这里需要特殊处理一下数组已是升序如[1,2,3,4]，l=0，r=0的特殊情况
        if(!r&&!l) return 0;
        else return r-l+1;
    }
};
