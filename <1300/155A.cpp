#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   int n;
   cin>>n;
   int*arr=new int[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   int minVal=arr[0],maxVal=arr[0];
   int ans=0;
   for(int i=1;i<n;i++){
       if(arr[i]<minVal){
           minVal = arr[i];
           ans++;
       }
       else if(arr[i]>maxVal){
           maxVal=arr[i];
           ans++;
       }
   }
   cout<<ans;
    return 0;
}