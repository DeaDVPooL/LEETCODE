class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        vector<int> ans;
        int w = 0,r = 1;
        for(int i=0;i<S.size();i++)
        {
            if(w+widths[S[i]-'a']>100)
            {
                r++;
                w = widths[S[i]-'a'];
            }else if(w+widths[S[i]-'a']==100)
            {
                r++;
                w = 0;
            }else w+=widths[S[i]-'a'];
        }
        if(w==0)    r--;
        ans.push_back(r);
        ans.push_back(w);
        return ans;
    }
};
