
#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int> &a, int n) 
{
    //write your code here
  for(int i=0;i<n;i++){
    for(int j=0;j<(n-i-1);j++){
        if(a[j]>a[j+1]){
            int temp=a[j+1];
            a[j+1]=a[j];
            a[j]=temp;


        }
    }
  }
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
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
 bubbleSort(arr,n);
}