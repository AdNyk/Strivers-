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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> s1;
        vector<int> v1;
        TreeNode* node= root;
        while(true){
 if(node!=NULL){
s1.push(node);
node=node->left;
        }else{
            if(s1.empty())break;
             node= s1.top();
           v1.push_back(node->val);
           s1.pop();
node= node->right;
        }

        }
        return v1;
    }
};