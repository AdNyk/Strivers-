#include<bits/stdc++.h>
using namespace std;
int maxDepth(string s) {
  int currentMax=0;
  int currentDepth=0;

  for(char c: s){
  	if(c=='('){
  		currentDepth++;
  		currentMax=max(currentMax,currentDepth);
  	}else if(c==')'){
  		currentDepth--;
  	}
  }

    return currentMax;
}

int main(){
	int n;
	cin>>n;
string s;
cin>>s;
cout<<maxDepth(s);
}