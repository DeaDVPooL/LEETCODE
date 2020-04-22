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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(root==NULL)  return ans;
        queue<TreeNode*> q1,q2;
        int flag = 1;
        q1.push(root);
        while(!q1.empty()||!q2.empty())
        {
            if(flag==1&&!q1.empty())
            {
                TreeNode* tmp = q1.front();
                if(q1.size()==1)    
                {
                    ans.emplace_back(tmp->val);
                    flag = 2;
                }
                q1.pop();
                if(tmp->left!=NULL) q2.push(tmp->left);
                if(tmp->right!=NULL)    q2.push(tmp->right);
            }else if(flag==2&&!q2.empty())
            {
                TreeNode* tmp = q2.front();
                if(q2.size()==1)   
                {
                    flag = 1;
                    ans.emplace_back(tmp->val);
                }
                q2.pop();
                if(tmp->left!=NULL) q1.push(tmp->left);
                if(tmp->right!=NULL)    q1.push(tmp->right);
            }
        }
        return ans;
    }
};
