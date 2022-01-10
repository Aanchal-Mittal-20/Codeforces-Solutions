#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   int s1,s2,s3;
   cin>>s1>>s2>>s3;
   int a = sqrt((s1*s2)/s3);
   int b = sqrt((s2*s3)/s1);
   int c = sqrt((s1*s3)/s2);
   
   int result = 4*a+4*b+4*c;
   cout<<result;
   
    return 0;
}