#include<bits/stdc++.h>
using namespace std;
 bool isPalindrome(string& str) {
    // Write your code here.
string actual="";
for (int i=0;i<=str.length()-1;i++){
	if(isalnum(str[i]))
	actual.push_back(tolower(str[i]));
}
int left=0;
int right=(actual.length()-1);

while(left<=right){
	if(actual[left]==actual[right]){
		left++;
		right--;
	}
	else if(actual[left]!=actual[right] ){
		return false;
	}

}
return true;
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