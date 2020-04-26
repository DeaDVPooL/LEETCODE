class Node
{
    public:
    int val,r,c;
    Node(int v,int rr,int cc):val(v),r(rr),c(cc){}
    Node(){}
};
bool cmp(const Node& a,const Node& b)
{
    if((a.r+a.c)==(b.r+b.c))    return a.r>b.r;
    return a.r+a.c<b.r+b.c;
}
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<int> ans;
        vector<Node> tmp;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums[i].size();j++)
            {
                tmp.emplace_back(Node(nums[i][j],i+1,j+1));
            }
        }
        sort(tmp.begin(),tmp.end(),cmp);
        for(auto it : tmp)
        {
            ans.emplace_back(it.val);
        }
        return ans;
    }
};
