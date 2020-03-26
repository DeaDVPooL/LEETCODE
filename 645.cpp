class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> cnt;
        int mis,rep;
        for(int i=0;i<nums.size();i++)  cnt[nums[i]]++;
        for(int i=0;i<nums.size();i++)
        {
            if(cnt[i+1]==0) mis = i+1;
            else if(cnt[i+1]==2)    rep = i+1;
        }
        ans.push_back(rep);
        ans.push_back(mis);
        return ans;
    }
};
