class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
        vector<int> ans;
        if(a>b) swap(a,b);
        if(b>c) swap(b,c);
        if(a>b) swap(a,b);
        if(a+1==b&&b+1==c)
        {
            ans.emplace_back(0);
            ans.emplace_back(0);
        }
        else if(a+1==b||b+1==c)
        {
            ans.emplace_back(1);
            ans.emplace_back(max(c-b-1,b-a-1));
        }else if(a+2==b||b+2==c)
        {
            ans.emplace_back(1);
            ans.emplace_back(c-2-a);
        }
        else{
            ans.emplace_back(2);
            ans.emplace_back(c-2-a);
        }
        return ans;

    }
};
