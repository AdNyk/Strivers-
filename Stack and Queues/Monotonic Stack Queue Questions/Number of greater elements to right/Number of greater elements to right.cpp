#include <bits/stdc++.h>
using namespace std;

vector<int> countGreater(vector<int>&arr, vector<int>&query) {
    // Write your code here
  vector<int> result;
  
  for(int i=0;i<query.size();i++){
  	int count=0;
for(int j=query[i]+1;j<arr.size();j++){
if(arr[query[i]]<arr[j])
	count++;
}
result.push_back(count);
}
return result;
}
int main(){
vector<int> arr;
int n1;
int n2;
cin>>n1;
cin>>n2;
vector<int> query;
for(int i=0;i<n1;i++){
	int a;
	cin>>a;
	arr.push_back(a);
}
for(int i=0;i<n2;i++){
	int a;
	cin>>a;
	query.push_back(a);
}
vector<int> result= countGreater(arr,query);
for(int i=0;i<query.size();i++){
	cout<<result[i]<<endl;
}
}