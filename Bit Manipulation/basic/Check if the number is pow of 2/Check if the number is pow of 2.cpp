#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n)
{
if((n&(n-1))==0)return true;
else return false;	
}
int main(){
int num;
cin>>num;
cout<<isPowerOfTwo(num);
}