#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   int n;
   cin>>n;
   int s1=0,s2=0,s3=0;
   while(n--){
       int x,y,z;
       cin>>x>>y>>z;
       s1+=x;
       s2+=y;
       s3+=z;
   }
   if(s1==0 && s2==0 && s3==0)
    cout<<"YES";
    else
        cout<<"NO";
    return 0;
}