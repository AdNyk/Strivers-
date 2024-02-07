#include <bits/stdc++.h> 
using namespace std;
void sort012(int *arr, int n)
{
  int low=0, mid=0, high =n-1;
  while(mid<=high){
if(arr[mid]==0){
  swap(arr[mid], arr[low]);
  low++;
  mid++;
  }
  else if (arr[mid]==1){
    mid++;
  }
  else if(arr[mid]==2){
    swap(arr[high],arr[mid]);
    high--;
  }
}
for(int i=0;i<n;i++){
  cout<<arr[i];
}

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
    sort012(&arr[0],n);
}