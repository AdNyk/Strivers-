#include<bits/stdc++.h>
using namespace std;
vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
vector<int> fibonacci;
 int nextNumber=1;
 int previousNumber=0;
int count=0; 
while(count<n){
fibonacci.emplace_back(previousNumber);
int temp=nextNumber;
nextNumber=nextNumber+previousNumber;
previousNumber=temp;
count++;

}
return fibonacci;
}

int main(){
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin>>n;
    cout<<"hi";
 vector<int> x= generateFibonacciNumbers(n);
 for(auto it=x.begin(); it!=x.end();it++){
  cout<<*it<<endl;
 }
}