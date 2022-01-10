#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,m;
    cin>>n;
    int*arr=new int[n];
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>m;
    int*brr=new int[m];
    for(int i=0;i<m;i++){
        cin>>brr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(brr[j]%arr[i]==0)
            v.push_back(brr[j]/arr[i]);
        }
    }
    sort(v.begin(),v.end());
    int ans=v[v.size()-1];
    int count=0;
    for(int i=v.size()-1;i>=0;i--){
        if(ans==v[i])
        count++;
    }
    cout<<count;
    
   return 0;
}