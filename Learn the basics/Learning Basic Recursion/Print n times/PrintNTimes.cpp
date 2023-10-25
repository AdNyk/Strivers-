#include<bits/stdc++.h>
using namespace std;
vector<string> printNTimes(int n){
    static int count=0;
    static vector<string> strings={};
   if(strings.size()!=n){ 
    count++;
    strings.emplace_back("Coding Ninjas ");
    printNTimes(n);
};
  
return strings; 
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin>>n;
    vector<string> strings=printNTimes(n);
    for(auto it=strings.begin(); it!=strings.end();it++){
        cout<<*it<<endl;
    }
 
}