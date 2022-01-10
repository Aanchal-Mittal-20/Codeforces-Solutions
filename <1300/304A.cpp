#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            double val=i*i+j*j;
            val=sqrt(val);
            if(floor(val)==val&&val<=n){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}