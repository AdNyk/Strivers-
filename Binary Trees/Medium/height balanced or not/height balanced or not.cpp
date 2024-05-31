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
int height(TreeNode* root){
    if(root==NULL)return 0;
    int lt= height(root->left);
    int rt=height(root->right);
    if(lt==-1||rt==-1)return -1;
    if(abs(rt-lt)>1)return -1;
    return 1+max(lt,rt);
}
    bool isBalanced(TreeNode* root) {
if(root==NULL)return true;
int val= height(root);
if(val==-1)return false;
return true;
    }
};