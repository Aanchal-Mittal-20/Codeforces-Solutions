#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   int n;
   cin>>n;
   int count=0,ans=0;
   for(int i=0;i<n;i++){
       int x;
       cin>>x;
       count+=x;
   }
   for(int i=1;i<=5;i++){
       if((count+i)%(n+1)!=1)
       ans++;
   }
   cout<<ans;
   
    return 0;
}