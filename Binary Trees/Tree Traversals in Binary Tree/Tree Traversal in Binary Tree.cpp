#include<bits/stdc++.h>
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
void inOrderTrav(TreeNode* root, vector<int> &inOrder){
if(root==NULL)return;
inOrderTrav(root->left,inOrder);
inOrder.push_back(root->data);
inOrderTrav(root->right,inOrder);
}
void preOrderTrav(TreeNode* root,vector<int> &preOrder){
    if(root==NULL)return;
preOrder.push_back(root->data);
preOrderTrav(root->left,preOrder);

preOrderTrav(root->right,preOrder);

}
void postOrderTrav(TreeNode* root,vector<int> &postOrder){

    if(root==NULL)return ;
    postOrderTrav(root->left,postOrder);
    postOrderTrav(root->right,postOrder);
    postOrder.push_back(root->data);

}
vector<vector<int>> getTreeTraversal(TreeNode *root){
    // Write your code here.
    vector<vector<int>> ans;
    vector<int> inOrder, preOrder,postOrder;
    inOrderTrav(root,inOrder);
    preOrderTrav(root,preOrder);
    postOrderTrav(root,postOrder);
    ans.push_back(inOrder);
    ans.push_back(preOrder);
    ans.push_back(postOrder);
    return ans;

}