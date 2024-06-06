class Solution {
public:
   bool isIsomorphic(string s, string t) {
        unordered_map<char,char>m1,m2;
        for(int i=0;i<s.length();i++){
            if(m1[s[i]]==NULL && m2[t[i]]==NULL){
                m1[s[i]]=t[i];   // using m1 map for s with t mapping
                m2[t[i]]=s[i];   // using m1 map for t with s mapping
            }
           
            //If value is not same as previous then return false
            else if(m1[s[i]]!=t[i] || m2[t[i]]!=s[i]){
                return false;
            }
        }   
        return true;
    }
};