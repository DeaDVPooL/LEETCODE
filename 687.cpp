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
    int maxlen = 0;
    int Path(TreeNode* root)
    {
        if(root==NULL)  return 0;
        int left = Path(root->left);
        int right = Path(root->right);
        int leftsum = 0,rightsum = 0;
        if(root->left!=NULL&&root->val==root->left->val)
        {
            leftsum+=left+1;
        }
        if(root->right!=NULL&&root->val==root->right->val)
        {
            rightsum+=right+1;
        }
        maxlen = max(maxlen,leftsum+rightsum);
        return max(leftsum,rightsum);
    }
    int longestUnivaluePath(TreeNode* root) {
        Path(root);
        return maxlen;
    }
};
