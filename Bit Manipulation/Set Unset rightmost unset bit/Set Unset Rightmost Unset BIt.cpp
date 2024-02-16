#include<bits/stdc++.h>
using namespace std;
int setBits(int N){
    // Write your code here.
    int pos=0;
    int x=N;
    int sum=0;
    while(x!=0){
    	if(x&1){
sum=sum+pow(2,pos);
    		   pos++;

    		x=x>>1;
 }else{
	break;
    }
}
int y=pow(2,pos);
N=N|y;
return N;
}
int main(){
int num;
cin>>num;
cout<<setBits(num);
}