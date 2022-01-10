#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    unordered_map<string,int> mp;
    mp.clear();
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        mp[s]++;
    }
    string ans="";
    int count=0;
    for(auto it:mp){
        if(it.second>count){
            ans=it.first;
            count=it.second;
        }
    }
    cout<<ans;
   return 0;
}