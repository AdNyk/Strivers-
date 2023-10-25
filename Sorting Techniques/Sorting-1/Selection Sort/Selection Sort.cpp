#include<bits/stdc++.h>
using namespace std;
void selectionSort(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        for(int j=i;j<arr.size();j++){
if(arr[j]<arr[i]){
int temp=arr[j];
arr[j]=arr[i];
arr[i]=temp;

}

        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
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
    selectionSort(arr);
 
}