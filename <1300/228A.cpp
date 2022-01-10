#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   int a,b,c,d;
   cin>>a>>b>>c>>d;
   int* arr = new int[4];
   arr[0]=a;
   arr[1]=b;
   arr[2]=c;
   arr[3]=d;
   sort(arr,arr+4);
   int count=0;
   for(int i=0;i<3;i++){
       if(arr[i]==arr[i+1])
       count++;
   }
   cout<<count;
   
    return 0;
}