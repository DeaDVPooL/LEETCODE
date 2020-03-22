class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> ans(nums.size(),0);
        for(int i=0;i<nums.size();i++)
        {
            for(int j=nums.size()-2;j>=index[i];j--)
            {
                ans[j+1] = ans[j];
            }
            ans[index[i]] = nums[i];
        }
        return ans;
    }
};
