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
    int findSecondMinimumValue(TreeNode* root) {
        dfs(root);
        return s.size() <= 1 ? -1 : (*++s.begin());
    }
private:
    set<int> s;
    void dfs(TreeNode* root) {
        if (root == NULL) return;
        if (root->left != NULL) dfs(root->left);
        s.insert(root->val);
        if (root->right != NULL) dfs(root->right);
    }
};
