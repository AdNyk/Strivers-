#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &arr, int n) {
    // Write your code here.
    int size=n;
    for(int i=1;i<n;i++){
       
if(arr[i]==arr[i-1])size--;

    }
    return size;
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
    cout<<removeDuplicates(arr,n);
 
}