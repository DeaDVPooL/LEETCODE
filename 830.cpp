class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        vector<vector<int>> ans;
        int left = 0,right = 0,len = 0;
        while(left<S.size()&&right<S.size())
        {
            vector<int> tmp;
            while(right<S.size()&&S[left]==S[right])
            {
                len++;
                right++;
            }
            if(len>=3)
            {
                tmp.push_back(left);
                tmp.push_back(right-1);
                ans.push_back(tmp);
            }
            len = 0;
            left = right;
        }
        return ans;
    }
};
