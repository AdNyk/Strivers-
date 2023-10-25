#include<bits/stdc++.h>
using namespace std;
vector<int> reverseArray(int n, vector<int> &nums)
{
    // Write your code here.
    vector<int> reversedArray={};
while(nums.empty()!=true){
int temp= *(nums.end()-1);
reversedArray.emplace_back(temp);
nums.pop_back();
}

return reversedArray;
}

int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin>>n;
       	int a;
    vector<int> num={};
   for(int i=0;i<n;i++)
{
   cin>>a;
   	num.emplace_back(a);
 }
 vector<int> reversedArray=reverseArray(n,num);

for(auto it=reversedArray.begin();it!=reversedArray.end();it++){
	cout<<*it<<endl;
}

}