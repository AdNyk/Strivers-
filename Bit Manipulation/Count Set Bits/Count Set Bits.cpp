#include<bits/stdc++.h>
using namespace std;
int countSetBits(int N)
{
    //Write your code here
    int n=N;
    int count=0;
for(int  i=1;i<=n;i++){
	int j=i;
    while(j>0){
    	if(j&1)count++;
    	j=j>>1;
    }

}
    return count;
}
int main(){
int num;
cin>>num;
cout<<countSetBits(num);
}