/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root==NULL)return ans;
        stack<TreeNode*> s1;
        s1.push(root);
        while(!s1.empty()){
            TreeNode* node= s1.top();
            ans.push_back(node->val);
            s1.pop();
            if(node->right!=NULL) s1.push(node->right);
            if(node->left!=NULL) s1.push(node->left);

        }
          return ans;
    }
  
};