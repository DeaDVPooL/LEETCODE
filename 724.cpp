class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if(nums.size()==0)  return -1;
        int left = 0,right = 0,index = 0;
        for(int i=1;i<nums.size();i++)  right+=nums[i];
        while(left!=right)
        {
            index++;
            if(index==nums.size())  return -1;
            left+=nums[index-1];
            right-=nums[index];
        }
        return index;
    }
};
