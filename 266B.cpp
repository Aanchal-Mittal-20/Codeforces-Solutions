#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   int n,t;
   cin>>n>>t;
   cin.ignore();
   string s;
   getline(cin,s);
   for(int i=0;i<t;i++){
       for(int j=0;j<s.length()-1;j++){
           if(s[j] == 'B' && s[j+1] == 'G'){
           s[j]='G';
           s[j+1]='B';
           j=j+1;
       }
       }
   }
   cout<<s;
    return 0;
}