class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int r = 0, c = 0,index = 0;
        while(index<matrix[0].size())
        {
            r = 0;
            c = index;
            int v = matrix[r][c];
            while(r<matrix.size()-1&&c<matrix[0].size()-1)
            {
                r++;
                c++;
                if(matrix[r][c]!=v) return false;
            }
            index++;
        }
        index = 0;
        while(index<matrix.size())
        {
            c = 0;
            r = index;
            int v = matrix[r][c];
            while(r<matrix.size()-1&&c<matrix[0].size()-1)
            {
                r++;
                c++;
                if(matrix[r][c]!=v) return false;
            }
            index++;
        }
        return true;
    }
};
