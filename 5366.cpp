class Solution {
public:
    int path[6] = {24,13,34,23,41,12};
    bool func(vector<vector<int>>& grid,int row,int col,int to)
    {
        vector<vector<bool>> visit(row,vector<bool>());
        for(int i=0;i<row;i++)  visit[i].resize(col);
        for(int i=0;i<row;i++)  fill(visit[i].begin(),visit[i].end(),false);
        int r = 0,c = 0;
        while(true)
        {
            if(r==row-1&&c==col-1)  return true;
            visit[r][c] = true;
            if(to==1)   r--;
            else if(to==2)  c++;
            else if(to==3)  r++;
            else if(to==4)  c--;
            if(r<0||c<0||r>=row||c>=col)    return false;
            to = (to+1)%4+1;
            if(path[grid[r][c]-1]/10==to)   to = path[grid[r][c]-1]%10;
            else if(path[grid[r][c]-1]%10==to)   to = path[grid[r][c]-1]/10;
            else return false;
            if(visit[r][c]) return false;
        }
        return false;
    }
    bool hasValidPath(vector<vector<int>>& grid) {
        int row = grid.size(),col = grid[0].size();
        int to1 = path[grid[0][0]-1]/10==1||path[grid[0][0]-1]/10==4?path[grid[0][0]-1]%10:path[grid[0][0]-1]/10;
        int to2 = path[grid[0][0]-1]%10==1||path[grid[0][0]-1]%10==4?path[grid[0][0]-1]/10:path[grid[0][0]-1]%10;
        if(func(grid,row,col,to1)||func(grid,row,col,to2))    return true;
        return false;
    }
};
