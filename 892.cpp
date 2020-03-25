class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int sizex = grid[0].size();
        int sizey = grid.size();
        int res = 0;
        for(int i = 0; i < sizex; i++){
            for(int j = 0; j < sizey; j++){
                if(grid[i][j]){
                    res += 6 * grid[i][j] - (grid[i][j] - 1) * 2;
                    if(i>0 && grid[i-1][j])
                        res -= 2*min(grid[i][j],grid[i-1][j]);
                    if(j>0 && grid[i][j-1])
                        res -= 2*min(grid[i][j],grid[i][j-1]);
                } 
            }
        }
        return res;
    }
};
