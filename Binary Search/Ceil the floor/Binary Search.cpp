#include<bits/stdc++.h>
using namespace std;
pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
	int low=0;
	int high=n-1;
	int floor,ceil;
	pair<int,int> result;

	if(x<a[0]){
		result.first=-1;
		result.second=a[0];
		return result;
	}else if(x>a[n-1]){
		result.first=a[n-1];
		result.second=-1;
		return result;
	}

	while(low<=high){
		int mid=(low+high)/2;
		if(a[mid]==x){
			result.first=x;
			result.second=x;
return result;
		}else if(a[mid]>x){
			floor=a[mid-1];
			ceil=a[mid];
			high=mid-1;
		}else low=mid+1;

	result.first=floor;
	result.second=ceil;
	

}
return result;
}
int main(){
int n;
cin>>n;
int x;
cin>>x;
vector<int> nums;
for(int i=0;i<n;i++){
int a;
cin>>a;
nums.push_back(a);
}
pair<int,int> result=getFloorAndCeil(nums,n,x);
cout<<result.first;
cout<<" "<<result.second;
}