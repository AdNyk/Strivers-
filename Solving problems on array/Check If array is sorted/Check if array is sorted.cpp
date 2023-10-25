#include<bits/stdc++.h>
using namespace std;
int isSorted(int n, vector<int> a) {
    // Write your code here.
    int count=n;
    for(int i=1;i<n;i++){
      if(a[i]>=a[i-1])count--;
    }
    if(count==1)return 1;
    else
    return 0;

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
    int x=isSorted(n,arr);
    cout<<x;
 
}