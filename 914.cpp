class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> cnt;
        for(int i=0;i<deck.size();i++)  cnt[deck[i]]++;
        int minn = 0;
        for(auto it=cnt.begin();it!=cnt.end();it++) minn = gcd(minn,it->second);
        return minn>=2;
    }
};
