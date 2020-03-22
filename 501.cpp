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
    unordered_map<int,int> cnt;
    void inorder(TreeNode* root)
    {
        if(root==NULL)  return;
        inorder(root->left);
        cnt[root->val]++;
        inorder(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        inorder(root);
        int maxn = 0;
        for(auto it=cnt.begin();it!=cnt.end();it++)
            if(maxn<it->second) maxn = it->second;
        for(auto it=cnt.begin();it!=cnt.end();it++)
            if(maxn==it->second)    ans.push_back(it->first);
        return ans;
    }
};
