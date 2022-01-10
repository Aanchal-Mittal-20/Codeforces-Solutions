#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   string s;
   getline(cin,s);
   string output="";
   int i=0;
   while(i<s.length()){
       if(s[i]=='.') {
           output.push_back('0');
           i++;
       }
       else if(s[i]=='-'&&s[i+1]=='.'){
           output.push_back('1');
           i+=2;
       }
       else{
           output.push_back('2');
           i+=2;
       }
   }
   cout<<output;
    return 0;
}