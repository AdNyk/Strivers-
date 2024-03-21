
#include <bits/stdc++.h>
using namespace std;

int prec(char c) {
    if (c == '^') return 3;
    else if (c == '/' || c == '*') return 2;
    else if (c == '+' || c == '-') return 1;
    else return -1;
}

string infixToPostfix(string exp) {
    stack<char> st;
    string res;
    string s=exp;
  for(int i=0;i<exp.length();i++){
if(isalnum(s[i]))res+=s[i];
else if(s[i]=='(')st.push(s[i]);
else if(s[i]==')'){
     while (!st.empty() && st.top() != '(') {
                res += st.top();
                st.pop();
            }
            if (!st.empty() && st.top() == '(') {
                st.pop();
            }
}
else{
      while (!st.empty() && prec(s[i]) <= prec(st.top())) {
                res += st.top();
                st.pop();
            }
             st.push(s[i]);
    

}



     
}
while(!st.empty()){
res+= st.top();
st.pop();

}
return res;  
}

int main(){
string s;
getline(cin,s);
cout<<infixToPostfix(s);
}