#include<bits/stdc++.h>
using namespace std;
int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.	
	int low=0;
	int high=n-1;
	int ans=n;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]>x){
ans=mid;
high=mid-1;
		}else{
			low=mid+1;
		}
	}
	return ans;
}

int main(){
int n;
cin>>n;
vector<int> nums;
int x;
cin>>x;
for(int i=0;i<n;i++){
int a;
cin>>a;
nums.push_back(a);
}
cout<<upperBound(nums, n,x);
}