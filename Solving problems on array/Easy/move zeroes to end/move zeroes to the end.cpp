#include<bits/stdc++.h>
using namespace std;
vector<int> moveZeros(int n, vector<int> a) {
    // Write your code here.
   int nonZeroIndex=0;
   for(int i=0;i<n;i++){
    if(a[i]!=0){
a[nonZeroIndex]=a[i];
nonZeroIndex++;
    }
   }
  while(nonZeroIndex<n){a[nonZeroIndex]=0;
  nonZeroIndex++;}

return a;

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
    vector<int> zeroesToRight=moveZeros(n,arr);
    for(int i=0;i<n;i++){
        cout<<zeroesToRight[i];
    }
 
}