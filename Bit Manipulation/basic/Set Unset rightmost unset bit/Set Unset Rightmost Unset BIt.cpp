#include<bits/stdc++.h>
using namespace std;
 int setBits(int N)
    {
      int n=N;
      int count=0;
while(n>0){
    if((n&1)==0){
        
    
    n=n^1;
    break;
}
n=n>>1;
count++;
}
while(count>0){
    n=n*2;
    count--;
}
N=N|n;


return N;// Write Your Code here
    }
int main(){
int num;
cin>>num;
cout<<setBits(num);
}