#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   int n;
   cin>>n;
    if(n==1 || n%2){
        cout<<-1;
        return 0;
    }
    for(int i=1;i<=n-1;i+=2){
        cout<<i+1<<" "<<i<<" ";
    }
    return 0;
}