#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   string s;
   cin>>s;
   vector<char> v;
   v.clear();
   for(int i=0;i<s.length();i++){
       if(s[i]!='+')
       v.push_back(s[i]);
   }
   sort(v.begin(),v.end());
   cout<<v[0];
   for(int i=1;i<v.size();i++){
       cout<<"+"<<v[i];
   }
   
    return 0;
}