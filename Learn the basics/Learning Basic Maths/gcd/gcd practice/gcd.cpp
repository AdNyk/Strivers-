#include<bits/stdc++.h>
using namespace std;
int findGcd(int a, int b){
if(a==0)return b;
else if (b==0)return a;

else return findGcd(b%a,a);
}
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
int a,b;
cin>>a>>b;
int gcd= findGcd(a,b);
cout<<gcd;
 
}