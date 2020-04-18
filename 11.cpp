class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0,r = height.size()-1,minh,maxw = 0;
        while(l<r)
        {
            minh = min(height[l],height[r]);
            maxw = max(maxw,minh*(r-l));
            if(height[l]<height[r]) l++;
            else r--;
        }
        return maxw;
    }
};
