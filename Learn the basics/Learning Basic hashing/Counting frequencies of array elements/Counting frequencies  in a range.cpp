#include<bits/stdc++.h>
using namespace std;
vector<int> countFrequency(int n, int x, vector<int> &nums){
    // Write your code here.
     vector<int> hash(n,0);
     cout<<nums[0];
     for(int i=0;i<n;i++){
         hash[nums[i]]++;
         
     }
 return vector<int>(hash.begin() + 1, hash.end());;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin>>n;
      int x;
  cin>>x;
    vector<int> arr;
    for(int i=0;i<n;i++){
    int a;
    cin>>a;
arr.emplace_back(a);
    }

countFrequency(n,x,arr);
 
}