#include<bits/stdc++.h>
using namespace std;
bool isKthBitSet(int n, int k)
{
    // Write your code here.
   int bitK=pow(2,k-1);
int result=n&bitK;
if(result==bitK)return true;
return false;

}
int main(){
int n;
cin>>n;
int k;
cin>>k;
bool result=isKthBitSet(n,k);
cout<<result;
}