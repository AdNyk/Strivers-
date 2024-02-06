#include<bits/stdc++.h>
using namespace std;
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxCount=0;
        for(int i=0;i<nums.size();i++){
if(nums[i]==1){
    count++;
    if(count>maxCount){
        maxCount=count;
    }
    
}
else if(nums[i]==0){
count=0;
}
        }
        
        return maxCount;
    }
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
    int a;
    cin>>a;
arr.emplace_back(a);
    }
 cout<<findMaxConsecutiveOnes(arr);
}