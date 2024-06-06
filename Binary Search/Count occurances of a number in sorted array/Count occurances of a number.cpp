//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public: 
    /* if x is present in arr[] then returns the count
        of occurrences of x, otherwise returns 0. */
        int binarySearch(int arr[],int target,bool leftSearch,int size){
    int ind=-1;
    int left=0;
     
    int right=size-1;

while(left<=right){  
     int mid = left + (right - left) / 2;  
    if(target>arr[mid])left=mid+1;
else if(target<arr[mid])right=mid-1;
else{
    ind=mid;
    if(leftSearch)right=mid-1;
    else left=mid+1;
    
}

 
}return ind;
}

    int count(int arr[], int n, int x) {
        // code here
        int result[2]={-1,-1};
     int first= binarySearch(arr,x,true,n);
      if (first == -1) return 0;
     int last= binarySearch(arr,x,false,n);
     result[0]=first;
     result[1]=last;
     int ans= last-first+1;
     
     return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends