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
    vector<int> tree;
    void inorder(TreeNode* root)
    {
        if(root==NULL)  return;
        inorder(root->left);
        tree.push_back(root->val);
        inorder(root->right);
    }
    TreeNode* sortedBST(int l,int r)
    {
        if(l>r) return NULL;
        int mid = l+(r-l)/2;
        TreeNode* root = new TreeNode(tree[mid]);
        root->left = sortedBST(l,mid-1);
        root->right = sortedBST(mid+1,r);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        if(root==NULL)  return root;
        inorder(root);
        return sortedBST(0,tree.size()-1);
    }
};
