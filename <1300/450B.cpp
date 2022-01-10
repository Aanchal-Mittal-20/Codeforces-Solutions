#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
 
int main()
{
    ll x,y;
    cin>>x>>y;
    ll a=(x+mod)%mod;
    ll b=(y+mod)%mod;
    ll c=(y-x+mod)%mod;
    ll d=(-x+mod)%mod;
    ll e=(-y+mod)%mod;
    ll f=(x-y+mod)%mod;
    ll n;
    cin>>n;
    int val=n%6;
    if(val==0){
        val=5;
    }
    else
    val--;
    switch(val){
        case 0:cout<<(a+mod)%mod;break;
        case 1:cout<<(b+mod)%mod;break;
        case 2:cout<<(c+mod)%mod;break;
        case 3:cout<<(d+mod)%mod;break;
        case 4:cout<<(e+mod)%mod;break;
        case 5:cout<<(f+mod)%mod;break;
    }
    return 0;
}