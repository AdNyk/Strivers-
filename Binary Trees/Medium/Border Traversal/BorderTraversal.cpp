/************************************************************

    Following is the Binary Tree node structure:

    template <typename T>
    class TreeNode
    {
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode()
        {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
bool isLeaf(TreeNode<int>* root){
    return(root->left==NULL && root->right==NULL);
}
void left(vector<int> &result,TreeNode<int>* root){
  TreeNode<int>* cur=root->left;
  while(cur){
      if(!isLeaf(cur)){
          result.push_back(cur->data);
      }
      if(cur->left)cur=cur->left;
      else cur=cur->right;
  }

}
void right(vector<int> &result,TreeNode<int>* root){
  TreeNode<int>* cur=root->right;
 vector<int> rev;
  while(cur){
      if(!isLeaf(cur)){
          rev.push_back(cur->data);
      }
      if(cur->right)cur=cur->right;
      else cur=cur->left;
  }
  reverse(rev.begin(),rev.end());
  for(int i=0;i<rev.size();i++){
      result.push_back(rev[i]);
  }

}
void leaf(vector<int> &result,TreeNode<int>* root){
  TreeNode<int>* cur=root;
  if(isLeaf(cur)){result.push_back(cur->data);
  return;}
  if(cur->left)leaf(result,cur->left);
  if(cur->right)leaf(result,cur->right);

}
vector<int> traverseBoundary(TreeNode<int> *root)
{

vector<int> result;
if(root==NULL)return result;
if(!isLeaf(root))result.push_back(root->data);
left(result,root);
leaf(result,root);
right(result,root);   
return result;
	// Write your code here.
}
