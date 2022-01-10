#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   int n;
   cin>>n;
   cin.ignore();
   string s;
   getline(cin,s);
   int ans=0;
   for(int i=0;i<s.length()-1;i++){
       if(s[i]==s[i+1]){
           ans++;
           s.erase(s.begin()+i+1);
           i=i-1;
       }
   }
   cout<<ans;
    return 0;
}