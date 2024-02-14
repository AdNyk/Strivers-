#include<bits/stdc++.h>

using namespace std;

string printFirstCharacters(vector<string>& strs) {
   for(int i=0;i<strs.size();i++){
   	string first=strs[0][i];
   	if(strs[0][0]=="")return "";
   	else{
   		for(int j=0;j<strs.size();j++){
   			
   		}
   	}
   }
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); // Ignore the newline character left in the input buffer

    vector<string> s;

    for (int i = 0; i < n; i++) {
        string a;
        getline(cin, a); // Read entire line including spaces
        s.push_back(a);
    }

cout<<printFirstCharacters(s);

    return 0;
}
