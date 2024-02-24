#include<bits/stdc++.h>
using namespace std;
int numberOfNodes(int N){
    // Write your code here.
    return pow(2,N-1);
}
int main(){
int num;
cin>>num;
cout<<numberOfNodes(num);
}