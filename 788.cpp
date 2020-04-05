class Solution {
public:
    int rotatedDigits(int N) {
        int cnt = 0,flag1,flag2;
        for(int i=1;i<=N;i++)
        {
            flag1 = 1;
            flag2 = 0;
            string s = to_string(i);
            for(char c : s)
            {
                if(c=='3'||c=='4'||c=='7')
                {
                    flag1 = 0;
                    break;
                }
                else if(!flag2&&c=='5'||c=='6'||c=='9'||c=='2')   flag2 = 1;
            }
            if(flag1&&flag2)    cnt++;
        }
        return cnt;
    }
};
