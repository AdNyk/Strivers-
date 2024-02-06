#include<bits/stdc++.h>
using namespace std;
int isSorted(int n, vector<int> a) {
    // Write your code here.
    bool flag=true;
    for(int i=1;i<n;i++){
      if(a[i]<a[i-1]){
flag=false;
break;
      };
    }
return (flag==true)?1:0;

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