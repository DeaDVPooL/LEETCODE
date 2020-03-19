class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<int,int> cnt1;
        unordered_map<int,int> cnt2;
        int cntA = 0,cntB = 0;
        for(int i=0;i<secret.size();i++)    
        {
            cnt1[secret[i]-'0']++;
            cnt2[guess[i]-'0']++;
        }
        for(int i=0;i<guess.size();i++)
            if(secret[i]==guess[i]) cntA++;
        for(auto it = cnt2.begin();it!=cnt2.end();it++)
            if(cnt1.count(it->first)!=0)    cntB+=min(cnt1[it->first],it->second);
        string ans = "";
        cntB-=cntA;
        ans+=to_string(cntA)+"A"+to_string(cntB)+"B";
        return ans;
    }
};
