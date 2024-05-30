#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int>& arr, int n)
{stack<int> st;
	vector<int> reverse;
	vector<int> result;
for(int i=n-1;i>=0;i--){
reverse.push_back(arr[i]);
}
result.push_back(-1);
st.push(reverse[0]);
for(int i=1;i<n;i++){
if(reverse[i]<st.top()){
	result.push_back(st.top());
	st.push(reverse[i]);
}else{
	while(!st.empty()&&reverse[i]>=st.top() ){
		st.pop();
	}
	if(st.empty())result.push_back(-1);
	else {
		result.push_back(st.top());
	}
st.push(reverse[i]);

}
}
vector<int> reverseResult;
for(int i=n-1;i>=0;i--){
reverseResult.push_back(result[i]);
}
return reverseResult;
}
int main(){
vector<int> arr;
int n;
cin>>n;
for(int i=0;i<n;i++){
	int a;
	cin>>a;
	arr.push_back(a);
}
vector<int> result= nextGreaterElement(arr,n);
for(int i=0;i<n;i++){
	cout<<result[i];
}
}