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
    bool ans = true;
    void inorder(TreeNode* root,int val)
    {
        if(root==NULL)  return;
        inorder(root->left,val);
        if(root->val!=val)  ans = false;
        inorder(root->right,val);
    }
    bool isUnivalTree(TreeNode* root) {
        int val = root->val;
        inorder(root,val);
        return ans;
    }
};
