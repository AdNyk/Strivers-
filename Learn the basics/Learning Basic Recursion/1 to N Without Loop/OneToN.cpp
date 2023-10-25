#include<bits/stdc++.h>
using namespace std;
vector<int> printNos(int x){
    static int count=1;
    static vector<int> numbers={};
if(numbers.size()!=x){
    numbers.emplace_back(count);
    count++;
    printNos(x);
}
return numbers;

}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin>>n;
   vector<int> numbers=printNos(n);
   for(auto it=numbers.begin();it!=numbers.end();it++){
    cout<<*it<<endl;
   } 
}