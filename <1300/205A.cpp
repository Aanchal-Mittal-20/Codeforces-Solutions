#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int minVal=INT_MAX;
    int*arr=new int[n];
    int res=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<minVal){
            minVal=arr[i];
            res=i;
        }
    }
    sort(arr,arr+n);
    if(arr[0]==arr[1]){
        cout<<"Still Rozdil";
        return 0;
    }
    cout<<res+1;
   return 0;
}