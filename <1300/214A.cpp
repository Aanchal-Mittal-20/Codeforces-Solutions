#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,m,ans=0;
    cin>>n>>m;
    if(n==1&&m==1){
        cout<<2;
        return 0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(((i*i+j)==n)&&((i+j*j)==m))
            ans++;
        }
    }
    cout<<ans;
    
   return 0;
}