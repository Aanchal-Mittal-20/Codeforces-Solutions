#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int arr[5][5];
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            cin>>arr[i][j];
            
    long long ans=0;
    vector<int> v;
    for(int i=0;i<5;i++)
    v.push_back(i);
    do{
        long long val = arr[v[0]][v[1]]+arr[v[1]][v[0]]+arr[v[2]][v[3]]+arr[v[3]][v[2]]+arr[v[1]][v[2]]+arr[v[2]][v[1]];
        val+=arr[v[3]][v[4]]+arr[v[4]][v[3]]+arr[v[2]][v[3]]+arr[v[3]][v[2]]+arr[v[3]][v[4]]+arr[v[4]][v[3]];
        ans=max(ans,val);
    }while(next_permutation(v.begin(),v.end()));
    cout<<ans;
    
   return 0;
}