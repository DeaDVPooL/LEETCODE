class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        int N = A.size()/2;
        unordered_map<int,int> cnt;
        for(int i=0;i<A.size();i++) cnt[A[i]]++;
        for(int i=0;i<A.size();i++)
            if(cnt[A[i]]==N)    return A[i];
        return 0;
    }
};
