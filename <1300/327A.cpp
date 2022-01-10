#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int maxCount=0;
    int count0=0,count1=0,m=-1;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a==1){
            count1++;
            if(count0>0)
            count0--;
        }
        else{
            count0++;
            if(count0>m)
            m=count0;
        }
    }
    cout<<count1+m;
    
    return 0;
}