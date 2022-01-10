#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> a;
    vector<int> b;
    bool flag=true;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        b.push_back(x);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int ans=a[0]*2;
    int last=a[a.size()-1];
    while(ans<last)
    ans++;
    if(b[0]<=ans){
        flag=false;
    }
    if(flag)
    cout<<ans;
    else
    cout<<-1;
    
    return 0;
}