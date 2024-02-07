#include <bits/stdc++.h> 
using namespace std;
int maximumProfit(vector<int> &prices)
{
   int currentMin=prices[0];
   int currentProfit=0;
   for(int i=1;i<prices.size();i++){
currentProfit=max(prices[i]-currentMin,currentProfit);
if(prices[i]-currentMin<0){
  currentMin=prices[i];
}
   }
   return currentProfit;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(auto it=0;it!=n;it++){
      int a;
      cin>>a;
      arr.push_back(a);
    }
 cout<<maximumProfit(arr);
}