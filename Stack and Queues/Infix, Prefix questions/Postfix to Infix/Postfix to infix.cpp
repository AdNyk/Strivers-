#include <bits/stdc++.h>
using namespace std;

string postToInfix(string postfix) {
    // Write your code here.
  stack<string> st;
for(int i=0;i<postfix.length();i++){
    if(isalnum(postfix[i])){
        string operand(1,postfix[i]);
st.push(operand);
    }
    else {
        string op1=st.top(); st.pop();
        string op2=st.top();st.pop();
      string result= "("+ op2+postfix[i]+op1+")";
       st.push(result);

    }
}
return st.top();
}

int main(){
string s;
getline(cin,s);
cout<<postToInfix(s);
}