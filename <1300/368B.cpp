#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    int n,m;
    cin>>n>>m;
    int*arr=new int[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    unordered_set<int> mp;
    int*b=new int[n];
    for(int i=n-1;i>=0;i--){
        mp.insert(arr[i]);
        b[i]=mp.size();
    }
    while(m--){
        int x;
        cin>>x;
        cout<<b[x-1]<<endl;
    }
    return 0;
}