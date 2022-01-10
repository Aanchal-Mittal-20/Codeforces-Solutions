#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int k;
    cin>>k;
    cin.ignore();
    string s;
    cin>>s;
    unordered_map<char,int> mp;
    for(int i=0;i<s.length();i++){
        mp[s[i]]++;
    }
    for(auto it:mp){
        if(((it.second)%k)!=0)
        {
            cout<<-1;
            return 0;
        }
    }
    string ans="";
    for(auto it:mp){
        for(int i=0;i<it.second/k;i++)
        ans.push_back(it.first);
    }
    for(int i=0;i<k;i++)
    cout<<ans;
    
    
   return 0;
}