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
    int minx = 1000000000;
    TreeNode* mint(TreeNode* root)
    {
        while(root->left!=NULL) root = root->left;
        return root;
    }
    TreeNode* maxt(TreeNode* root)
    {
        while(root->right!=NULL) root = root->right;
        return root;
    }
    void inorder(TreeNode* root)
    {
        if(root==NULL)  return;
        if(root->left!=NULL)    minx = min(minx,abs(root->val-maxt(root->left)->val));
        if(root->right!=NULL)    minx = min(minx,abs(root->val-mint(root->right)->val));
        inorder(root->left);
        inorder(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        inorder(root);
        return minx;
    }
};
