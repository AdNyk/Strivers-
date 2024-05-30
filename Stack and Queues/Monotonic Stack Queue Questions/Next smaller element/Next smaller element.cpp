#include <bits/stdc++.h>
using namespace std;

vector<int> immediateSmaller(vector<int>& a)
{
vector<int> result;
int n=a.size();
	// Write your code here.
	for(int i=0;i<n-1;i++){
		if(a[i]<a[i+1]){
			result.push_back(-1);
		}else{
			result.push_back(a[i+1]);
		}
	}
	result.push_back(-1);
	for(int i=0;i<result.size();i++){
		cout<<result[i];
	}
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
vector<int> result= immediateSmaller(arr);
}