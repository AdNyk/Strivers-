#include<bits/stdc++.h>
using namespace std;
string oddEven(int N){
    // Write your code here.
    if(N&1)return "odd";
    return "even";
}
int main(){
int n;
cin>>n;
cout<<oddEven(n);
}