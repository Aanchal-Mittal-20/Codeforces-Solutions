#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,k;
    cin>>n>>k;
    int*arr=new int[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    bool flag=true;
    for(int i=n-1;i>=k;i--){
        if(arr[i]!=arr[i-1]){
            flag=false;
            break;
        }
    }
    if(!flag){
        cout<<-1;
        return 0;
        
    }
    int ans=0;
    for(int i=n-2;i>=0;i--){
        if(arr[i]!=arr[n-1]){
            ans=i+1;
            break;
        }
    }
    cout<<ans;
   return 0;
}