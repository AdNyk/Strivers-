#include <bits/stdc++.h>
using namespace std;

string postfixToPrefix(string &s){
stack<string> st;
for(int i=0;i<s.length();i++){
    if(isalnum(s[i])){
        string operand(1,s[i]);
st.push(operand);
    }
    else {
        string op1=st.top(); st.pop();
        string op2=st.top();st.pop();
      string result=s[i]+ op2+op1;
       st.push(result);

    }
}
return st.top();
}
int main(){
string s;
getline(cin,s);
cout<<postfixToPrefix(s);
}