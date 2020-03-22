class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int> dict;
        stack<int> s;
        for(int i=nums2.size()-1;i>=0;i--)
        {
            while(!s.empty()&&s.top()<nums2[i]) s.pop();
            dict[nums2[i]] = s.empty()?-1:s.top();
            s.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++) ans.push_back(dict[nums1[i]]);
        return ans;
    }
};
