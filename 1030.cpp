class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
        vector<vector<int>> ans(R * C, vector<int>(3));
        int cnt = 0;
        for (int i = 0; i < R; ++i) {
            for (int j = 0; j < C; ++j) {
                ans[cnt][0] = i;
                ans[cnt][1] = j;
                ans[cnt][2] = abs(i - r0) + abs(j - c0);
                ++cnt;
            }
        }
        sort(ans.begin(), ans.end(), [&](vector<int> a, vector<int> b) {return a[2] < b[2]; });
        for (int i = 0; i < cnt; i++) ans[i].pop_back();
        return ans;
    }
};
