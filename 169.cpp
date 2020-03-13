class Solution {
public:
    unordered_map<int,int> dict;
    int majorityElement(vector<int>& nums) {
        int len = nums.size();
        for(int i=0;i<len;i++)
        {
            dict[nums[i]]++;
            if(dict[nums[i]]>len/2) return nums[i];
        }
        return 0;
    }
};
