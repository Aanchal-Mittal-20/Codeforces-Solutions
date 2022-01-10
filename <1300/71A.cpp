#include<bits/stdc++.h>
using namespace std;
 
void solve(string s){
    cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
}
 
int main()
{
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
       string s;
       cin>>s;
       if(s.length()>10){
           solve(s);
       }
       else{
           cout<<s<<endl;
       }
   }
   
    return 0;
}