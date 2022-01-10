#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int*arr=new int [n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    int small=arr[0];
    int big=arr[n-1];
    long long c1=0,c2=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=small)
        break;
        c1++;
    }
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]!=big)
        break;
        c2++;
    }
    cout<<(big-small)<<" ";
    if((c1==c2)&&(big==small)){
        long long ans=((long long)n*((long long)n-1))/2;
        cout<<ans;
    }
    else
    cout<<(c1*c2);
    
   return 0;
}