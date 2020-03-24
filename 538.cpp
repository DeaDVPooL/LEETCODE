TreeNode* convertBST(TreeNode* root) {
        dfs(root);
        return root;
    }
private:
    int sum = 0;
    void dfs(TreeNode* root) {
        if (root == NULL) return;
        if (root->right != NULL) dfs(root->right);
        sum += root->val;
        root->val = sum;
        if (root->left != NULL) dfs(root->left);
    }
