class Solution {
public:
    bool isPerfectSquare(int num) {
        int l = 1,r = 46340;
        while(l<=r)
        {
            int mid = l+(r-l)/2;
            int tmp = mid*mid;
            if(tmp==num)    return true;
            else if(tmp>num)    r = mid-1;
            else l = mid+1;
        }
        return false;
    }
};
