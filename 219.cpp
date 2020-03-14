class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        set<int> s;
        int t = 0;
        for(int i = 0; i < nums.size(); i++) {
            s.insert(nums[i]);
            if(s.size() == t) {
                for(int j = i - 1; j >= 0 && j >= i - k; j--) {
                    if(nums[i] == nums[j])
                        return true;
                }
            }
            t = s.size();
        }
        return false;
    }
};
