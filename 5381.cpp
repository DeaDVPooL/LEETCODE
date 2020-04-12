class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        int len = queries.size();
        vector<int> ans(len);
        unordered_map<int,int> pos;
        for(int i=1;i<=m;i++)    pos[i] = i-1;
        for(int i=0;i<len;i++)
        {
            ans[i] = pos[queries[i]];
            for(auto it = pos.begin();it!=pos.end();it++)
                if(it->second<pos[queries[i]])  it->second++;
            pos[queries[i]] = 0;
        }
        return ans;
    }
};
