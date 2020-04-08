class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int len = A.size(),index = 0;
        for(int i=1;i<len;i++)
        {
            if(A[i]<A[i-1])
            {
                index = i-1;
                break;
            }
        }
        return index;
    }
};
