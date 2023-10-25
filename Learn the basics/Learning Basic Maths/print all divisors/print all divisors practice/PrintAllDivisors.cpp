#include<bits/stdc++.h>
using namespace std;
vector<int> printDivisors(int n){
	vector<int> divisors={};
	for(int i=1;i<=n/2;i++){
	if(n%i==0){
divisors.emplace_back(i);
	}

	}
	divisors.emplace_back(n);
	return divisors;
}
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin>>n;
    vector<int> divisors;
    divisors=printDivisors(n);
    for(auto it=divisors.begin(); it!=divisors.end();it++){
    	cout<<*it<<endl;
    }
 
}