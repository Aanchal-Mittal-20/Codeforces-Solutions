#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   string a,b;
   getline(cin,a);
   getline(cin,b);
   string output="";
   for(int i=0;i<a.length();i++){
       if(a[i]!=b[i]){
           output.push_back('1');
       }
       else{
           output.push_back('0');
       }
   }
   cout<<output;
    return 0;
}