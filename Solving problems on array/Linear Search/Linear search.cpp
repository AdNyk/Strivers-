#include<bits/stdc++.h>
using namespace std;
int linearSearch(int n, int num, vector<int> &arr)
{
    // Write your code here.
    for(int i=0;i<n;i++){
        if(arr[i]==num)return i;
    }
    return -1;
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
    int num;
    cin>>num;
    cout<<linearSearch(n,num,arr);
 }
