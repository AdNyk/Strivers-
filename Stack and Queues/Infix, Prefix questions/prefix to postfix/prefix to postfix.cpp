#include <bits/stdc++.h>
using namespace std;

string prefixToInfixConversion(string &s){
    // Write your code here.
    string reverse="";
    stack<string> st;
for(int i=s.length()-1;i>=0;i--){
reverse+=s[i];
}
for(int i=0;i<reverse.length();i++){
    if(isalnum(reverse[i])){
        string operand(1,reverse[i]);
st.push(operand);
    }
    else {
        string op1=st.top(); st.pop();
        string op2=st.top();st.pop();
      string result= "("+ op1+reverse[i]+op2+")";
       st.push(result);

    }
}
return st.top();
}

int main(){
string s;
getline(cin,s);
cout<<prefixToInfixConversion(s);
}