class Solution {
public:
    int minCostToMoveChips(vector<int>& chips) {
        int cnt_odd = 0, cnt_even = 0;
        for(int i = 0; i < chips.size(); i++)
            if(chips[i] % 2 == 0) cnt_even ++;
            else cnt_odd ++;
        return min(cnt_odd, cnt_even);
    }
};
