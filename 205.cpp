class Solution {
public:
    unordered_map<char,char> dict1;
    unordered_map<char,char> dict2;
    bool isIsomorphic(string s, string t) {
        int lens = s.size(),lent = t.size();
        if(lens!=lent)  return false;
        for(int i=0;i<lens;i++)
        {
            if(dict1.count(s[i])==0&&dict2.count(t[i])==0)   
            {
                dict1[s[i]] = t[i];
                dict2[t[i]] = s[i];
            } 
            else
            {
                //if(dict1.count(s[i])==0||dict2.count(t[i])==0)  return false;   
                if(t[i]!=dict1[s[i]]||s[i]!=dict2[t[i]])    return false;
            }
        }
        return true;
    }
};
