class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> cnt;
        unordered_set<int> cache;

        for (auto a : arr) cnt[a]++;
        for (auto c : cnt) {
            if (cache.count(c.second)) return false;
            else cache.insert(c.second);
        }

        return true;
    }
};
