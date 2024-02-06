#include<bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(vector<int> a, long long k) {
  long long sum=0;
  int maxLength=0;
  map<long long, int> consecutiveSum;
  for(int i=0;i<a.size();i++){
    sum+=a[i];
    if(sum==k){
maxLength=i+1;
    }
      if(consecutiveSum.find(sum)==consecutiveSum.end()){
  consecutiveSum[sum]=i;
}
    long long rem= sum-k;
if(consecutiveSum.find(rem)!=consecutiveSum.end()){
  int len= i- consecutiveSum[rem];
  maxLength=max(maxLength,len);

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