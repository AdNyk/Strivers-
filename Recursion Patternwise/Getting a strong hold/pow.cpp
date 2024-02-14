#include<bits/stdc++.h>
using namespace std;
double myPow(double x, int n) {
    // Write Your Code Here
    double y;
   
    if(n>0){
     if(n==1)return x;
    y=x*myPow(x,n-1);
    return y;}
    else if(n<=0){
        if(n==-1)return 1/x;
        y=(1/x)*myPow(x,n+1);
          return y;
    }
  
}
int main(){
    int x;
    cin>>x;
int n;
cin>>n;
cout<<myPow(x,n);
 
}