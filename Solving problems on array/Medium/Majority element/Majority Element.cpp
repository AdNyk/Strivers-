#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> v) {
  // Write your code here
  sort(v.begin(),v.end());
  int n=v.size();
  int mid= (n-1)/2;
  return v[mid];

}
int main(){
  int n;
  cin>>n;
  vector<int> v;
  for(auto it=0;it<n;it++){
    int a;
    cin>>a;
v.push_back(a);
  }
  cout<<majorityElement(v);
}