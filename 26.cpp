class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==1)  return 1;
        for(auto it = nums.begin();it!=nums.end();)
        {
            if(it==nums.begin())    it++;
            if(*(it-1)==*it)   nums.erase(it);
            else    it++;
        }
        return nums.size();
    }
};

//双指针版
public int removeDuplicates(int[] nums) {
    if (nums.length == 0) return 0;
    int i = 0;
    for (int j = 1; j < nums.length; j++) {
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}
