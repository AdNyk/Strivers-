#include<bits/stdc++.h>
using namespace std;

vector<int> alternateNumbers(vector<int>&a) {
int negIndex=1;
int posIndex=0;
vector<int> v(a.size(),0);

    // Write your code here.
for(int i=0;i<a.size();i++){
if(a[i]<0){
	v[negIndex]=a[i];
negIndex+=2;
}
else{
	v[posIndex]=a[i];
	posIndex+=2;
}

}return v;
}

int main(){
	int n;
	cin>>n;
	vector<int> arr;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		arr.push_back(a);

	}
	vector<int> result= alternateNumbers(arr);
	for(int i=0;i<n;i++){
		cout<<result[i];
	}

}