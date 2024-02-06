#include<bits/stdc++.h>
using namespace std;
string read(int n, vector<int> book, int target)
{
sort(book.begin(),book.end());
int beginning=0;
int end=n-1;
while(beginning!=end){
  if(book[beginning]+book[end]==target){
    return "YES";
  }else if(book[beginning]+book[end]>target){
end--;
  }else if(book[beginning]+book[end]<target){
beginning++;
  }
}
return "NO";
}

int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int> book;
    for(auto it=0;it!=n;it++){
      int a;
      cin>>a;
      book.push_back(a);
    }
    cout<<read(n,book,target);
}