#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int sum1=0,sum2=0,ans=0,countDiff=0;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        if((x%2==0&&y%2==1)||(x%2==1&&y%2==0))
        countDiff++;
        sum1+=x;
        sum2+=y;
    }
    if(sum1%2==0&&sum2%2==0){
        ans=0;
    }
    else if((sum1%2==0&&sum2%2==1)||(sum1%2==1&&sum2%2==0)){
        ans=-1;
    }
    else if((sum1%2==1&&sum2%2==1)&&countDiff>0){
        ans=1;
    }
    else{
        ans=-1;
    }
    cout<<ans;
    
    return 0;
}