#include<bits/stdc++.h>
using namespace std;
vector<long long> factorialNumbers(long long n) {
    // Write Your Code Here
    static vector<long long> collection;
   static long long factorial=1;
   static long long count=0;
    count++;
   if((factorial*count)<=n){
     factorial= factorial*count;
  
   collection.emplace_back(factorial);
   factorialNumbers(n);}
   return collection;

}

int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin>>n;
    vector<long long> collection= factorialNumbers(n);
    for(auto it=collection.begin(); it!=collection.end();it++){
    	cout<<*it<<endl;
    }
 
}