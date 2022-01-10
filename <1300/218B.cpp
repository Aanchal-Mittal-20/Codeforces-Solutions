#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,m;
    cin>>n>>m;
    int k=n;
    vector<int> v1,v2;
    int minVal=0,maxVal=0;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);
        v2.push_back(x);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end(),greater<int>());
    int i=0,j=0;
    while(n>0){
        minVal+=v1[i];
        v1[i]=v1[i]-1;
        if(v1[i]==0){
            i=(i+1)%v1.size();    
        }
        n=n-1;
    }
    while(k>0){
        maxVal+=v2[j];
        v2[j]=v2[j]-1;
        sort(v2.begin(),v2.end(),greater<int>());
        if(v2[j]==0){
            j=(j+1)%v2.size();
        }
        k=k-1;
        
    }
    cout<<maxVal<<" "<<minVal;
    
   return 0;
}