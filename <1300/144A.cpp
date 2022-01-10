#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   int n;
   cin>>n;
   int*arr=new int[n];
   int maxVal=0,maxInd=0,minVal=101,minInd=0;
   for(int i=0;i<n;i++){
       cin>>arr[i];
       if(arr[i]>maxVal){
           maxVal=arr[i];
           maxInd=i;
       }
       if(arr[i]<=minVal){
           minVal=arr[i];
           minInd=i;
       }
   }
   int ans = maxInd + n-1-minInd;
   if(minInd<maxInd){
       ans=ans-1;
   }
   cout<<ans;
    return 0;
}