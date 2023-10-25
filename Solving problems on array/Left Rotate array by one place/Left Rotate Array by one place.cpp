#include<bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    int temp;
    temp=arr[0];
    auto it=find(arr.begin(), arr.end(),arr[0]);
arr.erase(it);
arr.push_back(temp);
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
vector<int> rotated= rotateArray(arr,n);
for(auto it=rotated.begin();it!=rotated.end();it++){
    cout<<*it<<endl;
}

}