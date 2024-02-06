#include<bits/stdc++.h>
using namespace std;
int getSingleElement(vector<int> &arr){
    // Write your code here.    

   int result=arr[0];
   for(int i=1;i<arr.size();i++){
    result= result ^ arr[i]; 
   }
// non-optimal solution
    // for(int i=1;i<arr.size();i++){
      
    //   if(arr[i]!=arr[i-1]&&arr[i]!=arr[i+1]){

    //      return arr[i];
    // }
   return result;
   
}


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
    int a;
    cin>>a;
arr.emplace_back(a);
    }
cout<<getSingleElement(arr);
 
}