#include<bits/stdc++.h>
using namespace std;
  bool isPalindrome(string& str) {
    // Write your code here.

string reverse="";
for (int i=str.length()-1;i>=0;i--){
	reverse.push_back(str[i]);
}
return reverse==str;
}
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string n;
   getline(cin, n);

   cout<< isPalindrome(n);
 
}