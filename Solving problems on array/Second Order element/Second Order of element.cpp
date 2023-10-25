#include<bits/stdc++.h>
using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
      int max=INT_MIN;
    int secondMax=INT_MIN;
    int min=INT_MAX;
    int secondMin=INT_MAX;
    vector<int> newArray={};
  
    for(int i=0;i<n;i++){
     if(a[i]>max){
        secondMax=max;
        max=a[i];
     }else if(a[i]>secondMax&& a[i]<max){
        secondMax=a[i];
     }
     if(a[i]<min){
        secondMin=min;
        min=a[i];
     }else if (a[i]<secondMin&& a[i]>min){
        secondMin=a[i];
     }
    }
 
 newArray.emplace_back(secondMax);
    newArray.emplace_back(secondMin);
return newArray;
}

int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin>>n;
    vector<int> arr={};

for(auto it=0;it<n;it++){
	int i;
	cin>>i;
	arr.emplace_back(i);

}
vector<int> theArray=getSecondOrderElements(n,arr);
for(auto it=theArray.begin();it!=theArray.end();it++){
cout<<*it;
}
 
}