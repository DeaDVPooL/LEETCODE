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
    int sum = 0;
    int getsum(TreeNode* root)
    {
        if(root==NULL)  return 0;
        if(root->right==NULL&&root->left==NULL) return root->val;
        return getsum(root->left)+getsum(root->right)+root->val;
    }
    int findTilt(TreeNode* root) {
        if(root==NULL) return 0;
        findTilt(root->left);
        sum+=abs(getsum(root->left)-getsum(root->right));
        findTilt(root->right);
        return sum;
    }
};
