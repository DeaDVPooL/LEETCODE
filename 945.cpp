class Solution {
public:
    int minIncrementForUnique(vector<int>& A) {
        int len = A.size(),sum = 0;
        if(len==0) return 0;
        vector<int> pos(80010);
        fill(pos.begin(),pos.end(),-1);
        for(int i=0;i<len;i++)
        {
            sum+=findpos(A[i],pos)-A[i];
        }
        return sum;
    }
    int findpos(int a,vector<int>& pos)
    {
        int b = pos[a];
        if(b==-1)
        {
            pos[a] = a;
            return a;
        }
        b = findpos(b+1,pos);
        pos[a] = b;
        return b;
    }
};
