#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElementII(vector<int>& a) {
	stack<int> st;
 int n=a.size();
 vector<int> result(2 * n, -1);
reverse(a.begin(),a.end());
 for(int i=0;i<2*n-1;i++){
while(!st.empty()&& st.top()<=a[i%n]){
st.pop();
 }
 if(st.empty())result[i%n]=-1;

  else result[i%n]=st.top();
 st.push(a[i%n]);

}
for(int i=0;i<n;i++){
a[i]=result[i];
}
reverse(a.begin(),a.end());
return a;
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
vector<int> result= nextGreaterElementII(arr);
for(int i=0;i<n;i++){
	cout<<result[i];
}
}