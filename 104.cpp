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
    int maxdeep = 0;
    void maxDepth(TreeNode* root,int deep)
    {
        if(root==NULL)  return;
        maxdeep = max(maxdeep,deep);
        maxDepth(root->left,deep+1);
        maxDepth(root->right,deep+1);
    }
    int maxDepth(TreeNode* root) {
        maxDepth(root,1);
        return maxdeep;
    }
};
