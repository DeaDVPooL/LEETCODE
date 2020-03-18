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
    vector<string> ans;
    vector<string> binaryTreePaths(TreeNode* root)
    {
        if(root==NULL)  return ans;
        string s = "";
        binaryTreePaths(root,s);
        return ans;
    }
    void binaryTreePaths(TreeNode* root,string s) {
        s+=to_string(root->val);
        if(root->left==NULL&&root->right==NULL) ans.push_back(s);
        else s+="->";
        if(root->left!=NULL)    binaryTreePaths(root->left,s);
        if(root->right!=NULL)   binaryTreePaths(root->right,s);
    }
};
