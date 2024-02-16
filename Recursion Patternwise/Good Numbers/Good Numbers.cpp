#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
   int primeNumberOrNot(int n){
for(int i=2;i<n/2;i++){
	if(n%i==0)return 1;
	else return 0;
}
   }
   int checkifEvenOrOdd(int n){
   	if(n%2==0)return 1;
   	return 0;
   }

  int countGoodNumbers(long long n) {
      long long mod= 1000000007;
      long long firstNumber= pow(10,n);
      long long lastNumber=pow(10,n+1) -1;
      long long count =0;
for(int i=firstNumber;i<=lastNumber;i++){
	int x=i;
	while(x>0){
		int y=0;
		int z=checkifEvenOrOdd(int y);
		if(z==1){
		int check=	checkifEvenOrOdd(x);
		if(check==1) x=x%10;
		}else if(z==0){
		int check=	checkForPrime();
if(check==1)x=x%10;else
		}

	}
}

    }};
int main(){
    int x;
    cin>>x;
int n;
cin>>n;
cout<<myPow(x,n);
 
}