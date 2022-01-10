#include<bits/stdc++.h>
using namespace std;
 
bool isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
 
int main()
{
   int k,m;
   cin>>k>>m;
   int n=k+2;
   while(true){
       if(isPrime(n))
       {
           break;
       }
       n=n+2;
   }
   if(k==2&&m==3){
       cout<<"YES";
       return 0;
   }
   if(n==m){
       cout<<"YES";
   }
   else{
       cout<<"NO";
   }
    return 0;
}