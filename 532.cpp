class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if (k < 0) return 0;
        unordered_map<int, bool> m;
        unordered_set<int> s;
        for (int i = 0; i < nums.size(); i++) {
            if (m[nums[i] - k]) s.insert(nums[i]);
            if (m[nums[i] + k]) s.insert(nums[i] + k);
            m[nums[i]] = true;
        }
        return s.size();
    }
};
