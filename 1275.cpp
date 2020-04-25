class Solution {
public:
    bool checkwin(unordered_set<int>& S, vector<vector<int>>& wins) {
        for (auto win: wins) {
            bool flag = true;
            for (auto pos: win) {
                if (!S.count(pos)) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                return true;
            }
        }
        return false;
    }

    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<int>> wins = {
            {0, 1, 2},
            {3, 4, 5},
            {6, 7, 8},
            {0, 3, 6},
            {1, 4, 7},
            {2, 5, 8},
            {0, 4, 8},
            {2, 4, 6}
        };

        unordered_set<int> A, B;
        for (int i = 0; i < moves.size(); ++i) {
            int pos = moves[i][0] * 3 + moves[i][1];
            if (i % 2 == 0) {
                A.insert(pos);
                if (checkwin(A, wins)) {
                    return "A";
                }
            }
            else {
                B.insert(pos);
                if (checkwin(B, wins)) {
                    return "B";
                }
            }
        }

        return (moves.size() == 9 ? "Draw" : "Pending");
    }
};
