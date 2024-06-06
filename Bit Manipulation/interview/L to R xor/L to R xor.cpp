//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  int n(int number){
      if(number%4==1)return 1;
      else if(number%4==2) return number+1;
      else if(number%4==3)return 0;
      else return number;
  }
    int findXOR(int l, int r) {
        // complete the function here
        int ans= n(l-1)^n(r);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    while (t--) {
        // Input

        int l, r;
        cin >> l >> r;

        Solution obj;
        cout << obj.findXOR(l, r) << endl;
    }
}
// } Driver Code Ends