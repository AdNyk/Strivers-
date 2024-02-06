#include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>&a, int N) {
    // Write your code here.
   int sum1= N*(N+1)/2;
   int sum2=0;
    for(int i=0;i<a.size();i++){
        sum2=a[i]+sum2;
    }

    cout<<sum1<<endl;
    cout<<sum2<<endl;
    int difference=sum1-sum2;
    return difference;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n-1;i++){
    int a;
    cin>>a;
arr.emplace_back(a);
    }
 cout<<missingNumber(arr,n);
}