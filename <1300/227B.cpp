#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   int n;
   cin>>n;
   int*arr=new int[100001];
   for(int i=1;i<=n;i++){
       int x;
       cin>>x;
       arr[x]=i;
   }
   int m;
   long long petya=0,vasya=0;
   cin>>m;
   while(m--){
       int q;
       cin>>q;
       petya+=arr[q];
       vasya+=n-arr[q]+1;
   }
   cout<<petya<<" "<<vasya;
   
    return 0;
}