#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   string s;
   getline(cin,s);
   if(!isupper(s[0])){
       s[0] = s[0] - 32;
   }
   cout<<s;
    return 0;
}