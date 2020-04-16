bool cmp(vector<int>& a,vector<int>& b)
{
    return a[0]<b[0];
}
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),cmp);
        vector<vector<int>> ans;
        if(intervals.size()==0) return ans;
        int l = intervals[0][0],r = intervals[0][1];
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]>r)
            {
                vector<int> tmp(2);
                tmp[0] = l;
                tmp[1] = r;
                ans.push_back(tmp);
                l = intervals[i][0];
                r = intervals[i][1];
            }else if(intervals[i][1]>r)
            {
                r = intervals[i][1];
            }
        }
        vector<int> tmp(2);
        tmp[0] = l;
        tmp[1] = r;
        ans.push_back(tmp);
        return ans;
    }
};
