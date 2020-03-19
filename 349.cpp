class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> n1;
        set<int> ans;
        vector<int> a;
        for(int i=0;i<nums1.size();i++) n1.insert(nums1[i]);
        for(int i=0;i<nums2.size();i++)
            if(n1.count(nums2[i])!=0)   ans.insert(nums2[i]);  
        for(auto it=ans.begin();it!=ans.end();it++) a.push_back(*it);
        return a;
    }
};
