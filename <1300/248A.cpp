#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   int n;
   cin>>n;
   int lz=0,lo=0,rz=0,ro=0;
   for(int i=0;i<n;i++){
       int x,y;
       cin>>x>>y;
       if(x==0){
           lz++;
       }
       else{
           lo++;
       }
       if(y==0){
           rz++;
       }
       else{
           ro++;
       }
   }
   int ans = min(n-lz,n-lo)+min(n-rz,n-ro);
   cout<<ans;
   
    return 0;
}