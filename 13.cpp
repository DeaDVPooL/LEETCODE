class Solution {
public:
    int romanToInt(string s) {
        int len = s.size(),ans=0;
        for(int i=0;i<len;i++)
        {
            if(s[i]=='I')
            {
                if(i+1<len&&s[i+1]=='V')
                {
                    ans+=4;
                    i++;
                    continue;
                }else if(i+1<len&&s[i+1]=='X')
                {
                    ans+=9;
                    i++;
                    continue;
                }
                ans++;
            }else if(s[i]=='V') ans+=5;
            else if(s[i]=='X')
            {
                if(i+1<len&&s[i+1]=='L')
                {
                    ans+=40;
                    i++;
                    continue;
                }else if(i+1<len&&s[i+1]=='C')
                {
                    ans+=90;
                    i++;
                    continue;
                }
                ans+=10;
            }else if(s[i]=='L') ans+=50;
            else if(s[i]=='C')
            {
                if(i+1<len&&s[i+1]=='D')
                {
                    ans+=400;
                    i++;
                    continue;
                }else if(i+1<len&&s[i+1]=='M')
                {
                    ans+=900;
                    i++;
                    continue;
                }
                ans+=100;
            }else if(s[i]=='D') ans+=500;
            else if(s[i]=='M')  ans+=1000;
        }
        return ans;
    }
};
