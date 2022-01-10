#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   string s;
   getline(cin,s);
   int countLower=0;
   int countUpper = 0;
   for(int i=0;i<s.length();i++){
       if(isupper(s[i])) countUpper++;
       else countLower++;
   }
   if(countUpper>countLower){
       transform(s.begin(),s.end(),s.begin(),::toupper);
   }
   else{
       transform(s.begin(),s.end(),s.begin(),::tolower);
   }
   cout<<s;
    return 0;
}