#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   int n;
   cin>>n;
   int*arr=new int [7];
   for(int i=0;i<7;i++)
   cin>>arr[i];
   
   int ans=0,sum=0,i=0;
   while(true){
       if(sum>=n){
           ans=i;
           break;
       }
       sum+=arr[i];
       i=(i+1)%7;
   }
   if(ans==0){
       cout<<7;
       return 0;
   }
   cout<<ans;
   
    return 0;
}