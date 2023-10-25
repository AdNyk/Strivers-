#include<bits/stdc++.h>
using namespace std;
long long power(long long digit, long long numberOfDigits){
  int power=1;
for(int i=0;i<numberOfDigits;i++){
  power=power*digit;
}
  cout<<digit<<endl;
return power;
}
int armstrongCheck(long long n){
    long long copyOne=n,copyTwo=n;
    int numberOfDigits=0;
    long long armstrong=0;
    while(copyOne>0){
        copyOne=copyOne/10;
        numberOfDigits++;
    }
    while(copyTwo>0){
        long long digit=copyTwo%10;
        armstrong=armstrong +power(digit,numberOfDigits);
        copyTwo=copyTwo/10;
    }
    cout<<armstrong<<endl;
if(n==armstrong)return true;
return false;


}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    long long n;
    cin>>n;
    bool armstrongNumberOrNot=armstrongCheck( n);

 cout<<armstrongNumberOrNot;
}