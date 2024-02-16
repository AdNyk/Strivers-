#include<bits/stdc++.h>
using namespace std;
vector<int> bitManipulation(int num, int i){
    // Write your code here.
   int x= pow(2,i-1);
   vector<int> result;
   int checkBit=num&x;
   if(checkBit==x){
result.push_back(1);
result.push_back(num);
int y=num^x;
result.push_back(y);

}
else {
	result.push_back(0);
	int y= num|x;
	result.push_back(y);
	result.push_back(num);
}
return result;

}
int main(){
int num;
cin>>num;
int i;
cin>>i;
vector<int> result=bitManipulation(num,i);
for(auto it=result.begin();it!=result.end();it++){
	cout<<*it;
}
}