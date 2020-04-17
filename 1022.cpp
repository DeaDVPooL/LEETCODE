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
    const long M = 1e9 + 7;
    void dfs(TreeNode* root, long p, long& res) {
        if (root == NULL) return;
        p = (p << 1) | root->val;
        if (root->left == NULL && root->right == NULL) {
            res += p;
            res %= M;
            return;
        }
        dfs(root->left, p, res);
        dfs(root->right, p, res);
    }
    int sumRootToLeaf(TreeNode* root) {
        long res = 0;
        long p = 0;
        dfs(root, p, res);
        return res;
    }
};
