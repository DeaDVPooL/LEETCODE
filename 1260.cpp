class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size(),n = grid[0].size();
        vector<vector<int>> ans(m,vector<int>(n));
        int x = (k/n)%m,y = (k%n),index1 = 0,index2 = 0;
        int a = x,b = y;
        do{
            ans[x][y] = grid[index1][index2];
            y++;
            if(y==n)
            {
                y = 0;
                x = (x+1)%m;
            }
            index2++;
            if(index2==n)
            {
                index2 = 0;
                index1 = (index1+1)%m;
            }
        }while(a!=x||b!=y);
        return ans;
    }
};
