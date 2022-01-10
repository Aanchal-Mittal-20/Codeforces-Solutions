#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
 
 
bool cmp(pair<char, ll>& a,
         pair<char, ll>& b)
{
    return a.second > b.second;
}
 
void sort(map<char, ll>& M,ll k)
{
    vector<pair<char, ll> > A;
    for (auto& it : M) {
        A.push_back(it);
    }
    sort(A.begin(), A.end(), cmp);
    ll count=0,ans=0;
    for(auto it:A){
        if(count>=k)
        break;
        ans+=min(it.second,k-count)*min(it.second,k-count);
        count+=it.second;
        // cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<ans;
}
int main()
{
    int n,k;
    cin>>n>>k;
    cin.ignore();
    string s;
    getline(cin,s);
    map<char,ll> mp;
    for(ll i=0;i<s.length();i++){
        mp[s[i]]++;
    }
    sort(mp,k);
    
    
    return 0;
}