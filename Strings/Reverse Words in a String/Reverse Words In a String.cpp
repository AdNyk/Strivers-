#include<bits/stdc++.h>
using namespace std;
string reverseString(string &str){
  // Write your code here.
  stack<string> s;  
  string a="";
  string reverse="";
  for(int i=0;i<str.length(); i++){
    if(str[i]==' '){
      if(a.size()!=0){
      s.push(a);}
      a="";
    }else{
a+=str[i];
}
  }
    s.push(a);
 while (!s.empty()) {
        reverse += s.top()+" ";
        s.pop();
    }
    if(reverse[0]==' '){
      reverse.erase(0,1);
    }
return reverse;
}

int main(){
string s;
getline(cin, s);
cout<<reverseString(s);
}