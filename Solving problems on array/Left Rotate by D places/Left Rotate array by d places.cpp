#include<bits/stdc++.h>
using namespace std;
vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
while(k!=0){
    int temp;
    temp=arr[0];
    auto it=find(arr.begin(), arr.end(),arr[0]);
arr.erase(it);
arr.push_back(temp);
k--;
}
return arr;
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
 int k;
 cin>>k;
 vector<int> rotatedArray=  rotateArray(arr, k);
 for(auto it=rotatedArray.begin();it!=rotatedArray.end();it++){
    cout<<*it;
 }
}