#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int five=0,zero=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==5)five++;
        else zero++;
    }
    int nine=five/9;
    if(nine<1){
        if(zero>0){
            cout<<0;
            return 0;
        }
        else{
            cout<<-1;
            return 0;
        }
    }
    if(zero==0){
        cout<<-1;
        return 0;
    }
    for(int i=0;i<nine*9;i++)
    cout<<5;
    for(int i=0;i<zero;i++)
    cout<<0;
   return 0;
}