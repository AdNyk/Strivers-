#include<bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int sum=0;
    int maxCount=0;
    int count=0;
    for(int i=0;i<a.size();){
        sum=sum+a[i];
        count++;
        cout<<count<<endl;
        if(sum<k){
            i++;
        }
        else if(sum==k){
            sum=0;
            if(maxCount<count){
                maxCount=count;
                count=0;
            }count=0;
        }
        else if(sum>k){
            sum=0;
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
      int k;
    cin>>k;
    vector<int> arr;
    for(int i=0;i<n;i++){
    int a;
    cin>>a;
arr.emplace_back(a);
    }

 cout<<longestSubarrayWithSumK(arr,k);
}