#include<bits/stdc++.h>
using namespace std;
long long sumFirstN(long long n) {
    // Write your code here.
static long long sum=0;
static long long count=n;
if(count==0)return sum;
else{
    sum=sum+count;
    count--;
sumFirstN(n);
}
}


int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    long long n;
    cin>>n;
cout<<sumFirstN(n);
 
}