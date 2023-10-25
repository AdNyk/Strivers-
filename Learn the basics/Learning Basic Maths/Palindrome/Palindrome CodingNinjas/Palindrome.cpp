#include<bits/stdc++.h>
using namespace std;
bool palindromeCheck(long long number){
int numberOfDigits=-1;
long long copyOne=number,copyTwo=number;
while(copyOne>0){
	copyOne=copyOne/10;
	numberOfDigits++;
}
int reverseNumber=0;
while(copyTwo>0){
	int power=1;
	for(int i=0;i<numberOfDigits;i++){
power=power*10;
	}
	int exponentNumber=+(copyTwo%10)*power;
	reverseNumber=reverseNumber+exponentNumber;
	copyTwo=copyTwo/10;
	numberOfDigits--;


}
cout<<reverseNumber<<endl;
if(reverseNumber==number){return true;}else
return false;
}
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    long long n;
    cin>>n;
    bool palindromeOrNot=palindromeCheck(n);

 cout<<palindromeOrNot<<endl;
}