#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    map<pair<int,int>,int> mp;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        mp[{x,y}]++;
    }
    int maxVal=0;
    for(auto it:mp){
        if(it.second>maxVal)
        maxVal=it.second;
    }
    cout<<maxVal;
    return 0;
}