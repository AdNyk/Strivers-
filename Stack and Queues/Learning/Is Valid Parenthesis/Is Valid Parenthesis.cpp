#include<bits/stdc++.h>
using namespace std;
bool isValidParenthesis(string s)
{
stack<char> a;
for(int i=0;i<s.size();i++){
	if(s[i]=='('|| s[i]=='['||s[i]=='{'){
	a.push(s[i]);
	}
	else if(!a.empty())
	 {
	if((s[i]==')'&&a.top()=='(')||(s[i]=='}'&&a.top()=='{')||(s[i]==']'&&a.top()=='['))
	{
		a.pop();

	}

}else{
		return false;
	}
}
return a.empty();
}
int main(){
string s;
cin>>s;
cout<<isValidParenthesis(s);
return 0;
}