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
    int target,cnt = 0;
    void func(TreeNode* root,int sum)
    {
        if(root==NULL)  return;
        if(target==sum+root->val) cnt++;
        func(root->left,sum+root->val);
        func(root->right,sum+root->val);
    }
    int pathSum(TreeNode* root, int sum) {
        if(root==NULL)  return 0;
        target = sum;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* tmp = q.front();
            q.pop();
            func(tmp,0);
            if(tmp->left!=NULL) q.push(tmp->left);
            if(tmp->right!=NULL)    q.push(tmp->right);
        }
        return cnt;
    }
};
