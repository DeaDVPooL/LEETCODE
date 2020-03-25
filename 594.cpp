class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> dict;
        int maxl = 0;
        for(int i=0;i<nums.size();i++)  dict[nums[i]]++;
        for(auto it=dict.begin();it!=dict.end();it++)
            if(dict.count(it->first+1)!=0)    maxl = max(maxl,it->second+dict[it->first+1]);
        return maxl;
    }
};
