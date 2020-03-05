/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> ans;
    void bfs(queue<TreeNode*> cq)
    {
        queue<TreeNode*> nq;
        vector<int> v;
        while(!cq.empty())
        {
            TreeNode* tmp = cq.front();
            cq.pop();
            v.push_back(tmp->val);
            if(tmp->left)   nq.push(tmp->left);
            if(tmp->right)  nq.push(tmp->right);
        }
        if(!nq.empty()) bfs(nq);
        ans.push_back(v);
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<TreeNode*> nq;
        if(root!=NULL)
        {
            nq.push(root);
            bfs(nq);
        }
        return ans;
    }
};
