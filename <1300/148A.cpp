#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   int k,l,m,n,d;
   cin>>k>>l>>m>>n>>d;
   bool*arr=new bool[d];
   int ans=0;
   for(int i=0;i<d;i++){
       arr[i]=false;
   }
   for(int i=0;i<d;i++){
       if((i+1)%k==0 || (i+1)%l==0 || (i+1)%m==0 || (i+1)%n==0){
           arr[i]=true;
       }
   }
   for(int i=0;i<d;i++){
       if(arr[i]==true)
       ans++;
   }
   cout<<ans;
   
    return 0;
}