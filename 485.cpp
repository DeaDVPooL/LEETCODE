class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max1 = 0,cnt = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)  cnt++;
            else
            {
                max1 = max(max1,cnt);
                cnt = 0;
            }
        }
        return max(max1,cnt);
    }
};
