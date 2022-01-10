#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    signed long arr[n]={0};
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    sort(arr+1,arr+n+1);
    long long count=0;
    for(int i=1;i<=n;i++){
        if(i!=arr[i])
        count+=abs(i-arr[i]);
    }
    printf("%I64d",count);
    return 0;
}