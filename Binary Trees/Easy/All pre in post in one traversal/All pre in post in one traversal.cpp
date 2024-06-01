class Solution{
public:
stack<pair<TreeNode*, int>> st;
st.push({root,1});
vector<int> pre,in, post;

while(!st.empty()){
	auto it= st.top();
	st.pop();
	if(it.second==1){
		pre.push_back(it);
		it.second++;
		st.push(it);
		if(it.first->left){
			st.push(it.first->left,1);
		}
	}
	if(it.second==2){
		in.push_back(it);
		it.second++;
		st.push(it);
		if(it.first->right){
			st.push(it.first->right,1);
		}
	}	
	else post.push_back(it.first->val);	
}	
};