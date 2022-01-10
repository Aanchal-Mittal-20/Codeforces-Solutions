#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<2*n+1;i++){
        if(i<=n){
            for(int j=0;j<(n-i);j++)
            cout<<"  ";
            for(int j=0;j<=i;j++){
                if(i==0){
                    cout<<j;
                }
                else{
                    cout<<j<<" ";
                }
            }
            for(int j=i-1;j>=0;j--){
                if(j==0){
                    cout<<j;
                }
                else{
                    cout<<j<<" ";
                }
            }
        }
        else{
            for(int j=0;j<(i-n);j++)
            cout<<"  ";
            for(int j=0;j<=(2*n-i);j++){
                if(i==2*n){
                    cout<<j;
                }
                else{
                    cout<<j<<" ";
                }
            }
            for(int j=2*n-i-1;j>=0;j--){
                if(j==0){
                    cout<<j;
                }
                else{
                    cout<<j<<" ";
                }
            }
        }
        
        cout<<endl;
    }
    
   return 0;
}