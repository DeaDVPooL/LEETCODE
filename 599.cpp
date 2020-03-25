class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> ans;
        int mini = INT_MAX;
        unordered_map<string,int> cnt;
        for(int i=0;i<list1.size();i++) cnt[list1[i]]=i+1;
        for(int i=0;i<list2.size();i++)
            if(cnt[list2[i]]!=0&&i+cnt[list2[i]]-1<mini)   mini = i+cnt[list2[i]]-1;
        for(int i=0;i<list2.size();i++)
            if(cnt[list2[i]]!=0&&i+cnt[list2[i]]-1==mini)   ans.push_back(list2[i]);
        return ans;
    }
};
