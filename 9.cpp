class Solution {
public:
    vector<int> a;
    bool isPalindrome(int x) {
        if(x<0) return false;
        int flag = 1;
        while(x>0)
        {
            a.push_back(x%10);
            x/=10;
        }
        int len = a.size();
        for(int i=0;i<len/2;i++)
            if(a[i]!=a[len-i-1])    flag = 0;
        if(flag)    return true;
        else return false;
    }
};
