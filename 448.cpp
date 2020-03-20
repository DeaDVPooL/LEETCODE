class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        vector<bool> hash(nums.size() + 1, false);
        for(int i = 0; i < nums.size(); i++) {
            hash[nums[i]] = true;
        }
        for(int i = 1; i < hash.size(); i++) {
            if(hash[i] == false)
                result.push_back(i);
        }
        return result;

    }
};
