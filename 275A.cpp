#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   int x1,x2,x3,y1,y2,y3,z1,z2,z3;
   cin>>x1>>x2>>x3;
   cin>>y1>>y2>>y3;
   cin>>z1>>z2>>z3;
   
   int a1 = (x1+x2+y1)%2==0?1:0;
   int a2 = (x1+x2+y2+x3)%2==0?1:0;
   int a3 = (x2+x3+y3)%2==0?1:0;
   int a4 = (x1+y1+z1+y2)%2==0?1:0;
   int a5 = (x2+y1+y2+y3+z2)%2==0?1:0;
   int a6 = (x3+y3+z3+y2)%2==0?1:0;
   int a7 = (y1+z1+z2)%2==0?1:0;
   int a8 = (z1+z2+z3+y2)%2==0?1:0;
   int a9 = (y3+z3+z2)%2==0?1:0;
   cout<<a1<<a2<<a3<<endl;
   cout<<a4<<a5<<a6<<endl;
   cout<<a7<<a8<<a9;
    return 0;
}