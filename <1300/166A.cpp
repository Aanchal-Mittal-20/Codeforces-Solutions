#include<bits/stdc++.h>
using namespace std;
 
bool sortBy(pair<int,int> &a,pair<int,int> &b){
    if(a.first>b.first)
    return true;
    if(a.first==b.first&&a.second<b.second)
    return true;
    return false;
}
 
int main()
{
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end(),sortBy);
    int count=0;
    int first=v[k-1].first;
    int second=v[k-1].second;
    for(auto it:v){
        if(it.first==first&&it.second==second)
        count++;
    }
    cout<<count;
    return 0;
}