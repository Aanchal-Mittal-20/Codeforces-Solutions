#include<bits/stdc++.h>
using namespace std;
 
void solve(string s){
    unordered_map<char,int> mp;
    for(int i=0;i<s.length();i++)
    mp[s[i]]++;
    int count=0;
    int ans=0;
    for(auto it:mp){
        if(it.second&1)
        count++;
    }
    if(count<=1)
    ans=1;
    else{
        if(count&1)
        ans=1;
        else
        ans=2;
    }
    if(ans==1)
    cout<<"First";
    else
    cout<<"Second";
} 
 
int main()
{
    string s;
    getline(cin,s);
    solve(s);
    
   return 0;
}