#include<bits/stdc++.h>
using namespace std;
int search(vector<int> &nums, int target) {
    // Write your code here.
    int low=0;
    int high=n-1;
    int mid=(high-low)/2
    if(target<mid){
search(low,mid);
    }else if(target>mid){
search(mid,high);
    }else{
    	return mid;
    }
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
cout<<search(nums, target);
}