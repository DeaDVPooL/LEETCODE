class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int> cnt;
        set<int> s;
        for(int i=0;i<nums.size();i++)  cnt[nums[i]]++;
        int maxn = 0;
        for(auto it=cnt.begin();it!=cnt.end();it++) maxn = max(maxn,it->second);
        for(auto it=cnt.begin();it!=cnt.end();it++)
            if(it->second==maxn)    s.insert(it->first);
        int minl = INT_MAX;
        for(auto it : s)
        {
            int l = 0,r = nums.size()-1;
            while(l<r)
            {
                if(nums[l]==it&&nums[r]==it)    break;
                if(nums[l]==it) r--;
                else if(nums[r]==it)    l++;
                else
                {
                    r--;
                    l++;
                }
            }
            minl = min(minl,r-l+1);
        }
        return minl;
    }
};
