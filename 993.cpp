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
    void dfs(TreeNode* root, TreeNode* p, int d, int x, int& depth, TreeNode** parent) {
        if (root == NULL) return;
        if (root->val == x) {
            *parent = p;
            depth = d;
            return;
        }
        dfs(root->left, root, d + 1, x, depth, parent);
        dfs(root->right, root, d + 1, x,  depth, parent);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        int dx = 0;
        int dy = 0;
        TreeNode* px = NULL;
        TreeNode* py = NULL;
        dfs(root, NULL, 0, x, dx, &px);
        dfs(root, NULL, 0, y, dy, &py);
        return (dx == dy) && (px != py);
    }
};
