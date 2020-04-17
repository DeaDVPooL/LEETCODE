class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int> record(60,0);
        int cnt = 0;
        for(int t : time)
        {
            t%=60;
            if(t!=0)    cnt+=record[60-t];
            else cnt+=record[t];
            record[t]++;
        }
        return cnt;
    }
};
