#include<bits/stdc++.h>
using namespace std;
int maxDepth(string s) {
	// Write your code here.
	int count=0;
	int n=s.size();
	for(int i=0;i<n;i++){
		if (s[i]=='(')count++;
	}
	return count;
}

int main(){
	int n;
	cin>>n;
string s;
cin>>s;
cout<<maxDepth(s);
}