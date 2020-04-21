class Solution {
public:
    int heightChecker(vector<int>& heights)
    {
        vector<int> heights2(heights);
        sort(heights.begin(), heights.end());
        int len = heights.size(), cnt = 0;
        for (int i = 0; i < len; i++)
            if (heights[i] != heights2[i]) cnt++;
        return cnt;
    }
};
