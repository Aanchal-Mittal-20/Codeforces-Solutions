#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int m,n;
    cin>>m>>n;
    int*arr=new int[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    sort(arr,arr+m);
    int ans=0,i=0;
    while(n--){
        if(arr[i]<0){
            ans=ans+(-arr[i]);
        }
        else
        break;
        i++;
    }
    cout<<ans;
    
   return 0;
}