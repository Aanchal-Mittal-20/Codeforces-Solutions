#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   int n;
   cin>>n;
   int*arr=new int[n];
   for(int i=0;i<n;i++)
   cin>>arr[i];
   int ans = abs(arr[n-1]-arr[0]);
   int l=n-1,h=0;
   for(int i=0;i<n-1;i++){
       if(abs(arr[i+1]-arr[i])<ans){
           ans = abs(arr[i+1]-arr[i]);
           l=i;
           h=i+1;
       }
   }
   cout<<l+1<<" "<<h+1;
}