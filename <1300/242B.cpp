#include<bits/stdc++.h>
using namespace std;
 
void solve(int n){
    for(int i=n+1;i<=2*n;i++)
    cout<<i<<" ";
}
 
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    int minVal=INT_MAX;
    int maxVal=INT_MIN;
    int ans=-1;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        minVal=min(minVal,x);
        maxVal=max(maxVal,y);
        v.push_back({x,y});
    }
    for(int i=0;i<v.size();i++){
        if(v[i].first==minVal&&v[i].second==maxVal){
            ans=i+1;
            break;
        }
    }
    cout<<ans;
    
    return 0;
}