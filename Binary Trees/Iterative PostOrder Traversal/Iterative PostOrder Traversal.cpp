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
        stack<TreeNode*> s;
        vector<int> postOrder;
        TreeNode* cur= root;
        TreeNode* temp;
        while(cur!=NULL|| !s.empty()){
if(cur!=NULL){
    s.push(cur);
    cur=cur->left;
}else {
temp= s.top()->right;
    if(temp==NULL){
temp= s.top();
s.pop();
postOrder.push_back(temp->val);
while(!s.empty()&& temp==s.top()->right){
    temp=s.top();
    s.pop();
    postOrder.push_back(temp->val);
}
    }else cur= temp;


}
        }
return postOrder;
    }
    
};`