#include<bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(vector<int> a, long long k) {
int left =0; int right=0;
int maxLen=0;
int n=a.size();
long long sum=a[0];
while(right<n){
   if(sum==k){
   maxLen=max(maxLen, right-left+1); 
  }
   right++;
  sum+=a[right];

  while(left<=right && sum>k){
sum-=a[left];
left ++;
  }
 
}
return maxLen;
}
int main(){
    
int n;
cin>>n;
long long k;
cin>>k;
vector<int> arr;
for(int i=0;i<n;i++){
  int a;
  cin>>a;
  arr.emplace_back(a);
}
cout<<longestSubarrayWithSumK(arr,k);
}