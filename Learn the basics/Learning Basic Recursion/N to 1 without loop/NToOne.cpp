#include<bits/stdc++.h>
using namespace std;
vector<int> printNos(int x){
	static int count=x;
	static vector<int>  nToOne={};
if(nToOne.size()!=x){
	nToOne.emplace_back(count);
count--;
printNos(x);

} 
return nToOne;
}
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin>>n;
  
    vector<int> nToOne=printNos(n);
    for(auto it=nToOne.begin();it!=nToOne.end();it++){
    	cout<<*it<<endl;
    }
 
}