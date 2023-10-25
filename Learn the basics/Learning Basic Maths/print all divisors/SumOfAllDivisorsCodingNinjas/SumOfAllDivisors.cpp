#include<bits/stdc++.h>
using namespace std;
int sumOfDivisors(int n){
	vector<int> allSummedDiv={};
	for(int i=1;i<=n;i++){
		int sumOfIndividual=0;
		for(int j=1;j<=sqrt(i);j++){
			if(i%j==0){
				sumOfIndividual=sumOfIndividual+j;
				if((i/j)!=j){
				sumOfIndividual=sumOfIndividual+(i/j);}
			}
		}
	
allSummedDiv.emplace_back(sumOfIndividual);
	}
	int sum=0;
for(auto it=allSummedDiv.begin(); it!=allSummedDiv.end();it++){
cout<<*it<<endl;
}
return sum;

}
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin>>n;
    cout<<sumOfDivisors(n);
 
}