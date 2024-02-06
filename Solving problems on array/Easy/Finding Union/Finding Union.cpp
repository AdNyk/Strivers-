#include<bits/stdc++.h>
using namespace std;
vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    vector<int> c;
    for(int i=1;i<a.size();){
        if(a[i]==a[i-1]){
            auto it=find(a.begin(), a.end(),a[i]);
            a.erase(it);
        }else{
            i++;
        }
    }
      for(int j=1;j<b.size();){
        if(b[j]==b[j-1]){
            auto it=find(b.begin(), b.end(),b[j]);
            b.erase(it);
        }else{
            j++;
        }
    }

int i=0;
int j=0;
    while(i<a.size()&&j<b.size()){
        if(a[i]<b[j]){
            c.emplace_back(a[i]);
            i++;
    }else if(b[j]<a[i]){
c.emplace_back(b[j]);
j++;
    }else if(a[i]==b[j]){
        c.emplace_back(a[i]);
    i++;
    j++;
    }


}
    while(i<a.size()){
        c.emplace_back(a[i]);
        i++;
    }
    while(j<b.size()){
        c.emplace_back(b[j]);
        j++;
    }
return c;

}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<int> arr1;
    for(int i=0;i<n;i++){
    int a;
    cin>>a;
arr1.emplace_back(a);
    }
    
    vector<int> arr2;
    for(int j=0;j<m;j++){
        int b;
        cin>>b;
arr2.emplace_back(b);
    }
vector<int> arr3= sortedArray(arr1,arr2);
for(int i=0;i<arr3.size();i++){
    cout<<arr3[i]<<endl;
}
}