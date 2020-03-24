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
    bool issame(TreeNode* s,TreeNode* t)
    {
        if(s==NULL&&t==NULL)    return true;
        if(s==NULL||t==NULL)    return false;
        return issame(s->left,t->left)&&issame(s->right,t->right)&&s->val==t->val;
    }
    bool isSubtree(TreeNode* s, TreeNode* t) {
        return s!=NULL&&(issame(s,t)||isSubtree(s->left,t)||isSubtree(s->right,t));
    }
};
