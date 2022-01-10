#include<bits/stdc++.h>
using namespace std;
 
void solve(string s){
    cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
}
 
int main()
{
   string a,b,c;
   getline(cin,a);
   getline(cin,b);
   getline(cin,c);
   unordered_map<char,int> mp;
   for(int i=0;i<a.length();i++)
   mp[a[i]]++;
   for(int i=0;i<b.length();i++)
   mp[b[i]]++;
   for(int i=0;i<c.length();i++)
   mp[c[i]]--;
   for(auto x: mp){
       if(x.second!=0){
           cout<<"NO";
           return 0;
       }
   }
   cout<<"YES";
   
    return 0;
}