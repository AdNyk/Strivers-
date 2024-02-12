#include <bits/stdc++.h> 
using namespace std;
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
  int indexOfBreak=-1;
  if(n==1){
    return permutation;
  }
  for(int i=n-1;i>0;i--){
    if(permutation[i-1]<permutation[i]){
      indexOfBreak=i-1;
      break;
    }
  }
    if (indexOfBreak == -1) {
        reverse(permutation.begin(), permutation.end());
        return permutation;
    }
  for(int i=n-1;i>indexOfBreak;i--){
    if(permutation[i]>permutation[indexOfBreak]){
      swap(permutation[i],permutation[indexOfBreak]);
break;
    }
  }
  reverse(permutation.begin()+ indexOfBreak+1,permutation.end());
  return permutation;
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
vector<int> result= nextPermutation(arr,n);
    for(int i=0;i<result.size();i++){
cout<<result[i];
    }
}