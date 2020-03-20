class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int cnt = 0,index = 0;
        for(int i=0;i<g.size();i++)
        {
            while(index<s.size()&&g[i]>s[index])    index++;
            if(index==s.size()) break;
            cnt++;
            index++;
        }
        return cnt;
    }
};
