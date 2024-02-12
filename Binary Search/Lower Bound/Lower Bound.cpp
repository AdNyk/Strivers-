#include<bits/stdc++.h>
using namespace std;
int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
int low=0;
int high=n-1;
int answer;
while(low<=high){
	int mid=(low+high)/2;
	if(arr[mid]>x){
		answer=mid;
		high=mid-1;
	}else {
		low=mid+1;
	}
}
return answer;
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
cout<<lowerBound(nums, n,x);
}