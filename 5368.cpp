class Solution {
public:
    int findLucky(vector<int>& arr) {
        int ans = -1;
        unordered_map<int,int> cnt;
        for(int i=0;i<arr.size();i++)   cnt[arr[i]]++;
        for(auto it=cnt.begin();it!=cnt.end();it++)
        {
            if(it->first==it->second)   ans = max(ans,it->first);
        }
        return ans;
    }
};
