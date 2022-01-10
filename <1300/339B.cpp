#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,m;
    cin>>n>>m;
    int*arr=new int[m];
    for(int i=0;i<m;i++)
    cin>>arr[i];
    int cur=1;
    long long ans=0;
    for(int i=0;i<m;i++){
        if(arr[i]>cur){
            ans+=arr[i]-cur;
        }
        else if(arr[i]<cur){
            ans+=n-cur+arr[i];
        }
        cur=arr[i];
    }
    cout<<ans;
   return 0;
}