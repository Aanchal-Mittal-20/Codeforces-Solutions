#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int n;
    cin>>n;
    int count=0;
    int*a=new int[n];
    int*b=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(b[j]==a[i]&&i!=j){
                count++;
                break;
            }
        }
    }
    cout<<n-count;
    
    return 0;
}