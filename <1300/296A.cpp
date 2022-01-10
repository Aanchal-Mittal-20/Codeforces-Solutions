#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int n;
    cin>>n;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        mp[x]++;
    }
    int p=(n+1)/2;
    bool flag=true;
    for(auto it:mp){
        if(it.second>p){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    return 0;
}