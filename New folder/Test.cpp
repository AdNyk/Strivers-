#include<bits/stdc++.h>
using namespace std;
 int reverse(int number){
    long long copyOne,copyTwo;

long long reversedNumber=0;
    if(number<0){
        copyOne=number*(-1);
        copyTwo=number*(-1);}

else {copyOne=number;
copyTwo=number;}

    int count=-1;
while(copyOne>0){
copyOne=copyOne/10;
count++;
}

while(copyTwo>0){
   long long square=1;
   for(int i=0;i<count;i++){
    square= square*10;
   }
    long long temp=(copyTwo%10)*square;
 
reversedNumber=reversedNumber+temp;
count--;
copyTwo=copyTwo/10;
}
if(number<0){
    reversedNumber=reversedNumber*(-1);
}
long long num_1=INT_MAX;
long long num_2=INT_MIN;
   if (reversedNumber>num_1|| reversedNumber<num_2) {
            return 0;
        }

else{
    return reversedNumber;
} 
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 int number;
 cin>>number;
int reversedNumber=reverse(number);
cout<<reversedNumber;
 
}