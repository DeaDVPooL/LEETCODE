class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int lenn = nums.size();
        if(lenn==0) return 0;
        int l = 0,r = 1;
        int len = 0;
        while(r<lenn)
        {
            if(nums[r]>nums[r-1]) r++;
            else
            {
                len = max(len,r-l);
                l = r;
                r++;
            }
        }
        len = max(len,r-l);
        return len;
    }
};
