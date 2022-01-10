#include<bits/stdc++.h>
using namespace std;
 
void solve(string s){
    cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
}
 
int main()
{
   string s;
   getline(cin,s);
   unordered_set<char> us;
   for(int i=0;i<s.length();i++){
       us.insert(s[i]);
   }
   if(us.size()%2)
   cout<<"IGNORE HIM!";
   else
   cout<<"CHAT WITH HER!";
   
    return 0;
}