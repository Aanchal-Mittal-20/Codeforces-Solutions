#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool isPrime(ll n){
    if(n==1)
    return false;
    if(n==2)
    return true;
    if(n%2==0)
    return false;
    ll a=sqrt(n);
    for(ll i=3;i<=a;i+=2){
        if(n%i==0)
        return false;
    }
    return true;
}
 
bool solve(ll x){
    if(x<=3){
        return false;
    }
    ll c=sqrt(x);
    if(c*c==x&&isPrime(c))
    return true;
    return false;
}
 
int main()
{
    int n;
    cin>>n;
    while(n--){
        ll x;
        cin>>x;
        if(solve(x))
        cout<<"YES";
        else
        cout<<"NO";
        cout<<endl;
    }
    
    return 0;
}