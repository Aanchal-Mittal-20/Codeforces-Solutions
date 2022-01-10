#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   int n;
   cin>>n;
   long double val;
   for(int i=0;i<n;i++){
       int x;
       cin>>x;
       val+=x;
   }
   val=val/n;
   cout<<fixed<<setprecision(12)<<val;
    return 0;
}