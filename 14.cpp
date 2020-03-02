class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minl = 1000000000,len = strs.size();
        string ans="";
        if(len==0)  return ans;
        if(len==1)  return strs[0];
        for(int i=0;i<len;i++)  minl = min(minl,(int)(strs[i].size()));
        for(int i=minl;i>0;i--)
        {
            int flag = 0;
            string tmp = strs[0].substr(0,i);
            for(int j=1;j<len;j++)
            {
                if(strs[j].substr(0,i)!=tmp)    break;
                if(j==len-1)
                {
                    flag = 1;
                    ans = strs[j].substr(0,i);
                }
            }
            if(flag)    return ans;
        }
        return ans;
    }
};
