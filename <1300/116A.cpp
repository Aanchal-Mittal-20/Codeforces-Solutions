#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   int n;
   cin>>n;
   int s=0;
   int ans=0;
   for(int i=0;i<n;i++){
       int x,y;
       cin>>x>>y;
       s-=x;
       s+=y;
       ans=max(ans,s);
   }
   cout<<ans;
    return 0;
}