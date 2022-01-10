#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    ll*arr=new ll[n];
    ll*v1=new ll[n];
    ll*v2=new ll[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    v1[0]=arr[0];
    for(int i=1;i<n;i++)
    v1[i]=v1[i-1]+arr[i];
    sort(arr,arr+n);
    v2[0]=arr[0];
    for(int i=1;i<n;i++){
        v2[i]=v2[i-1]+arr[i];
    }
    int m;
    cin>>m;
    while(m--){
        int type,l,r;
        cin>>type>>l>>r;
        if(type==1){
            if(l==1){
                cout<<v1[r-1];
            }
            else{
                cout<<v1[r-1]-v1[l-2];
            }
        }
        else{
            if(l==1){
                cout<<v2[r-1];
            }
            else{
                cout<<v2[r-1]-v2[l-2];
            }
        }
        cout<<endl;
    }
    
    return 0;
}