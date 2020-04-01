class Solution {
public:
    int repeatedStringMatch(string A, string B) {
        string tmp = A;
        int cnt = 1;
        if(tmp.find(B)!=string::npos)   return 1;
        while(tmp.size()<B.size())  
        {
            cnt++;
            tmp+=A;
        }
        if(tmp.find(B)!=string::npos)   return cnt;
        tmp+=A;
        if(tmp.find(B)!=string::npos)   return ++cnt;
        return -1;
    }
};
