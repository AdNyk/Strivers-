#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n)
{
    for(int i=1;i<n;i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current&&j>0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;

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
 
}