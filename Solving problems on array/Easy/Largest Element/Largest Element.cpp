#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &arr, int n) {
    // Write your code here.
   int max=arr[0];
   
   for(int i=1;i<n;i++){
   	if(max<arr[i])
max=arr[i];
   }
   return max;
}
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin>>n;
    vector<int> arr={};

for(auto it=0;it<n;it++){
	int i;
	cin>>i;
	arr.emplace_back(i);

}

cout<<largestElement(arr, n);


 
}