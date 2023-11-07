#include<bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(vector<int> a, long long k) {
   long long sum=0;
   map<long long, int> cumulativeSum;
   int maxLength=0;
   for(int i=0;i<a.size();i++){
    sum=sum+a[i];
    cumulativeSum[sum]=i;
    if(sum==k){
maxLength=i+1;
    }
long long rem=sum-k;
    if(cumulativeSum.find(rem)!=cumulativeSum.end()){
      int len= i-cumulativeSum[rem];
      maxLength=max(maxLength,len);
    }
     if (cumulativeSum.find(sum) == cumulativeSum.end()) {
            cumulativeSum[sum] = i;
        }
   }
   return maxLength;
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