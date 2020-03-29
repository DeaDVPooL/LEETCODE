class Solution {
public:
    int numTeams(vector<int>& rating) {
        int lg,rs,ls,rg;
        int ans = 0;
        for(int i=0;i<rating.size();i++)
        {
            lg = 0,rs = 0,ls = 0,rg = 0;
            for(int j=0;j<i;j++)
            {
                if(rating[j]<rating[i]) ls++;
                if(rating[j]>rating[i]) lg++;
            }
            for(int j=i+1;j<rating.size();j++)
            {
                if(rating[j]<rating[i]) rs++;
                if(rating[j]>rating[i]) rg++;
            }
            ans+=(lg*rs+ls*rg);
        }
        return ans;
    }
};
