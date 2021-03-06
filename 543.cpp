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
    int ans;
    int bfs(TreeNode* root)
    {
        if(root==NULL)    return 0;
        int L = bfs(root->left);
        int R = bfs(root->right);
        ans = max(ans,L+R+1);
        return max(L,R)+1;
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        ans = 1;
        bfs(root);
        return ans - 1;
    }
};
