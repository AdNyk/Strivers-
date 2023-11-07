#include<bits/stdc++.h>
using namespace std;
vector<int> getFrequencies(vector<int>& v) {
    // Write Your Code Here
  map<int,int> hash;
  for(int i=0;i<v.size();i++)
hash[v[i]]++;
 
 for(auto it=hash.begin();it!=hash.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
 }
int minFrequency=INT_MAX;
int min;
int maxFrequency=INT_MIN;
int max;


for(auto it=hash.begin();it!=hash.end();it++){
    if(it->second > maxFrequency){
        maxFrequency=it->second;
        max=it->first;
    }
   
}
for(auto it=hash.begin();it!=hash.end();it++){  

  if(it->second < minFrequency){
        minFrequency = it->second;
        min=it->first;
    }
   
}
 
    vector<int> soln;
    soln.emplace_back(min);
    soln.emplace_back(max);


return soln;
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
    vector<int> c=getFrequencies(arr);
    for(int i=0;i<c.size();i++){
        cout<<c[i]<<endl;
    }
 
}