#include<bits/stdc++.h>
using namespace std;
#define LL "%I64d"
#define ll long long
int main()
{
    int n;
    cin>>n;
    int count[8]={0};
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        count[x]+=1;
    }
    if(count[5]==0&&count[7]==0&&count[2]>=count[4]&&count[1]==count[4]+count[6]&&count[2]+count[3]==count[4]+count[6])
    {
        for(int i=0;i<count[4];i++)
        cout<<"1 2 4"<<endl;
        for(int i=0;i<count[2]-count[4];i++)
        cout<<"1 2 6"<<endl;
        for(int i=0;i<count[3];i++)
        cout<<"1 3 6"<<endl;
    }
    else
    cout<<"-1";
    
}