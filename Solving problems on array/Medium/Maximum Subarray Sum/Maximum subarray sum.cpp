#include <bits/stdc++.h> 
using namespace std;
long long maxSubarraySum(vector<int> arr, int n)
{long long  sum=0;
	long long maxSum=INT_MIN;
for(int i=0;i<n;i++){
    sum+=arr[i];
    if(sum<0){
    	sum=0;
    }
   if(sum>maxSum){
maxSum= max(maxSum,sum);

    }
}
return maxSum;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(auto it=0;it!=n;it++){
      int a;
      cin>>a;
      arr.push_back(a);
    }
 cout<<maxSubarraySum(arr,n);
}