class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        unordered_map<int,int> cnt;
        for(int i=0;i<dominoes.size();i++)
        {
            int maxd = max(dominoes[i][0],dominoes[i][1]),mind = min(dominoes[i][0],dominoes[i][1]);
            cnt[10*mind+maxd]++;
        }
        int ans = 0;
        for(auto it=cnt.begin();it!=cnt.end();it++) ans+=(it->second*(it->second-1))/2;
        return ans;
    }
};
