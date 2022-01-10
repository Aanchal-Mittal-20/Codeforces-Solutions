#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int k;
    cin>>k;
    int*arr=new int[12];
    for(int i=0;i<12;i++)
    cin>>arr[i];
    if(k==0){
        cout<<0;
        return 0;
    }
    sort(arr,arr+12);
    int ans=0;
    int i=11;
    while(i>=0){
        if(k<=0)
        {
            break;
        }
        ans++;
        k=k-arr[i];
        i=i-1;
    }
    if(k>0){
        cout<<-1;
        return 0;
    }
    cout<<ans;
    
   return 0;
}