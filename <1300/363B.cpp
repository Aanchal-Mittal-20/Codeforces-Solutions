#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int n,k;
    cin>>n>>k;
    int*arr=new int[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int minHeight=0;
    for(int i=0;i<k;i++)
    minHeight+=arr[i];
    int index=1;
    if(k==1){
        int ans=INT_MAX,ind=0;
        for(int i=0;i<n;i++){
            if(arr[i]<ans){
                ans=arr[i];
                ind=i+1;
            }
        }
        cout<<ind;
        return 0;
    }
    int val=minHeight;
    for(int i=1;i<=n-k;i++){
        int sum=val-arr[i-1]+arr[i+k-1];
        if(sum<minHeight){
            index=i+1;
            minHeight=sum;
        }
        val=sum;
    }
    cout<<index;
    
    return 0;
}