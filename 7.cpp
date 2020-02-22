class Solution {
public:
    vector<int> ans;
    int reverse(int x) {
        if(x==-pow(2,31)) return 0;
        int flag = 1;
        long long a=0;
        if(x<0) {flag = 0;x=-x;}
        while(x>0)
        {
            ans.push_back(x%10);
            x/=10;
        }
        int len = ans.size();
        for(int i=0;i<len;i++)  a+=ans[i]*pow(10,len-i-1);
        if(a>INT_MAX||a<INT_MIN)    return 0;
        if(!flag)   a=-a;
        return a;
    }
};
