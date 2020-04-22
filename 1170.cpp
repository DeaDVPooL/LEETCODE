class Solution {
public:
    int func(string s)
    {
        int cnt = 0;
        char minc = s[0];
        for(int i=0;i<s.size();i++)
        {
            if(s[i]<minc)
            {
                minc = s[i];
                cnt = 1;
            }else if(s[i]==minc)    cnt++;
        }
        return cnt;
    }
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        int len1 = queries.size(),len2 = words.size();
        vector<int> ans(len1,0);
        unordered_map<int,int> cnt;
        for(int i=0;i<len2;i++) cnt[func(words[i])]++;
        for(int i=0;i<len1;i++)
        {
            int tmp = func(queries[i]);
            for(auto it=cnt.begin();it!=cnt.end();it++)
            {
                if(it->first>tmp)   ans[i]+=it->second;
            }
        }
        return ans;
    }
};
