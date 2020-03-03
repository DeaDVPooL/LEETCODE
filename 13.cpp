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
/*大佬解法
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<string, int> m = {{"I", 1}, {"IV", 3}, {"IX", 8}, {"V", 5}, {"X", 10}, {"XL", 30}, {"XC", 80}, {"L", 50}, {"C", 100}, {"CD", 300}, {"CM", 800}, {"D", 500}, {"M", 1000}};
        int r = m[s.substr(0, 1)];
        for(int i=1; i<s.size(); ++i){
            string two = s.substr(i-1, 2);
            string one = s.substr(i, 1);
            r += m[two] ? m[two] : m[one];
        }
        return r;
    }
};
*/
