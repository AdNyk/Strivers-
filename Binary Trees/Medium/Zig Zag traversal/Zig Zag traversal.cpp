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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
vector<vector<int>> ans;
if(root==NULL)return ans;
queue<TreeNode*> data;
data.push(root);
int leftToRight=true;
while(!data.empty()){
    int size=data.size();
    vector<int> level(size);
    for(int i=0;i<size;i++){
        TreeNode* node =data.front();
        data.pop();
       int index= leftToRight?i:(size-i-1);
level[index]=node->val;
if(node->left)data.push(node->left);
if(node->right)data.push(node->right);

    }
    leftToRight=!leftToRight;
    ans.push_back(level);
}
return ans;
}
    
};