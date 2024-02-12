#include<bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& arr, int m)
{
	// Write your code here.
	int low=0;
	int high=arr.size()-1;
	int pos=arr.size();
	if(arr.size()==0)return 0;
		while(low<=high){
int mid=(low+high)/2;
if(m<=arr[mid]){
	pos=mid;
	high=mid-1;
}else{
	low=mid+1;
}}
return pos;
}
int main(){
int n;
cin>>n;
vector<int> nums;
int target;
cin>>target;
for(int i=0;i<n;i++){
int a;
cin>>a;
nums.push_back(a);
}
cout<<searchInsert(nums, target);
}