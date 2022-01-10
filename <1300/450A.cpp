#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   int n,m;
   cin>>n>>m;
   int*arr=new int[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
       arr[i]=ceil(arr[i]/(float)m);
   }
   int maxVal = arr[0];
   int ans=0;
   for(int i=0;i<n;i++){
       if(arr[i]>=maxVal){
           maxVal = arr[i];
           ans = i+1;
       }
   }
   cout<<ans;
   
    return 0;
}