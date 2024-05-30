#include<bits/stdc++.h>
using namespace std;

   int longestConsecutive(vector<int>& nums) {
set<int> n;
if(nums.size()==0)return 0;
for(int i=0;i<nums.size();i++){
	n.insert(nums[i]);
}
int maxLength=1;
for(auto it:n){

if(n.find(it-1)== n.end()){
int count=1;
int x= it;
while(n.find(x+1)!=n.end()){
	count++;
	x++;
}
maxLength=max(maxLength,count);
}

return maxLength;
}
            }
    
int main(){
	int n;
	cin>>n;
	vector<int> nums;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
nums.push_back(a);
	}
	cout<<longestConsecutive(nums);
}

