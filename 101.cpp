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
    bool isSymmetric(TreeNode* root1,TreeNode* root2)
    {
        if(root1==NULL&&root2==NULL)    return true;
        if(root1==NULL||root2==NULL)    return false;
        return root1->val==root2->val&&isSymmetric(root1->left,root2->right)&&isSymmetric(root1->right,root2->left);
    }
    bool isSymmetric(TreeNode* root) {
        return root==NULL?true:isSymmetric(root->left,root->right);
    }
};
