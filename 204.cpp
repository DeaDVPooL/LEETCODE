class Solution {
public:
    int countPrimes(int n) {
        vector<bool> isprim(n);
        fill(isprim.begin(),isprim.end(),true);
        for(int i=2;i*i<n;i++)
        {
            if(isprim[i])
                for(int j=2*i;j<n;j+=i)
                    isprim[j] = false;
        }
        int cnt = 0;
        for(int i=2;i<n;i++)    
            if(isprim[i])   cnt++;
        return cnt;
    }
};
