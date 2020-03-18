class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lo = 0,hi = 0,len = nums.size();
        while(true)
        {
            while(hi<len&&nums[hi]==0)  hi++;
            while(lo<len&&nums[lo]!=0)  lo++;
            if(hi==len||lo==len)    break;
            if(lo>hi)   
            {
                hi++;
                continue;
            }
            nums[lo] = nums[hi];
            nums[hi] = 0;
        }
    }
};
