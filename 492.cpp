class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> ans;
        int t = sqrt(area);
        while(t>=1)
        {
            if(area%t==0)
            {
                ans.push_back(area/t);
                ans.push_back(t);
                return ans;
            }
            t--;
        }
        return ans;
    }
};
