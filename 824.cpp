class Solution {
public:
    set<char> dict{'a','e','i','o','u','A','E','I','O','U'};
    string toGoatLatin(string S) {
        string s = "",append = "";
        int cnt = 1;
        bool first = true;
        for(int i=0;i<S.size();i++)
        {
            if(first&&dict.count(S[i])!=1)
            {
                first = false;
                append+=S[i];
            }else if(first) 
            {
                first = false;
                s+=S[i];
            }
            else if(S[i]==' ')
            {
                s+=(append+"ma");
                for(int i=0;i<cnt;i++)  s+="a";
                s+=" ";
                cnt++;
                append = "";
                first = true;
            }else   s+=S[i];
            
        }
        s+=(append+"ma");
        for(int i=0;i<cnt;i++)  s+="a";
        return s;
    }
};
