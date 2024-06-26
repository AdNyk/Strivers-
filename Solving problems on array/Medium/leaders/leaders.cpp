//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        int maxN= a[n-1];
        vector<int> leaders;
        leaders.push_back(maxN);
        for(int i=n-2;i>=0;i--){
            if(a[i]>maxN){
                maxN=max(maxN,a[i]);
                leaders.push_back(maxN);
            }
            
        }
      vector<int> sorted;
for(int i=leaders.size()-1;i>=0;i--){
	sorted.push_back(leaders[i]);
}
     return sorted;   
    }
};

//{ Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
  =       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }


// } Driver Code Ends