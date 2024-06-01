#include<bits/stdc++.h>
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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
  stack<TreeNode*> s1;
  stack<TreeNode*> s2;
  TreeNode* node=root;
  if(root==NULL)return ans;
s1.push(node);
while(!s1.empty()){
      node=s1.top();
    s2.push(s1.top());
    s1.pop();
    if(node->left != NULL)s1.push(node->left);
    if(node->right!=NULL)s1.push(node->right);
  

}     
while(!s2.empty()){
    TreeNode* current= s2.top();
    ans.push_back(current->val);
    s2.pop();

}
return ans;
    }
    
};