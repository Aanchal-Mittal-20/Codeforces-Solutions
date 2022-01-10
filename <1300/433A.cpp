#include<bits/stdc++.h>
using namespace std;
 
bool solve(int count1,int count2,int sum){
    if(count1==0){
        if(count2&1)
        return false;
    }
    if(count2==0){
        if(count1&1)
        return false;
    }
    if(sum%200!=0)
    return false;
    return true;
}
 
int main()
{
    int n;
    cin>>n;
    bool ans=true;
    int count1=0,count2=0,sum=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        sum+=x;
        if(x==100)count1++;
        else count2++;
    }
    if(solve(count1,count2,sum))
    cout<<"YES";
    else
    cout<<"NO";
    
    return 0;
}