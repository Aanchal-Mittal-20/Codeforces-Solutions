#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   int y;
   cin>>y;
   y=y+1;
   string num = to_string(y);
   while(true) {
       if(num[0]!=num[1]&&num[1]!=num[2]&&num[2]!=num[3]&&num[0]!=num[2]&&num[0]!=num[3]&&num[1]!=num[3]){
           break;
       }
       else{
           y=stoi(num);
           y=y+1;
           num = to_string(y);
       }
   }
   cout<<num;
    return 0;
}