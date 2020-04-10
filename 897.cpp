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
    TreeNode* cur;
    void inorder(TreeNode* root)
    {
        if(root==NULL)  return;
        inorder(root->left);
        root->left = NULL;
        cur->right = root;
        cur = root;
        inorder(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* ans = new TreeNode(0);
        cur = ans;
        inorder(root);
        return ans->right;
    }
};
