#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s,t;
    getline(cin,s);
    getline(cin,t);
    bool flag=true;
    unordered_map<char,int> mp1;
    for(int i=0;i<s.length();i++){
        if(s[i]!=' ')
        mp1[s[i]]++;
    }
    
    for(int i=0;i<t.length();i++){
        if(t[i]==' ')
        continue;
        if(mp1[t[i]]<1){
            flag=false;
            break;
        }
        mp1[t[i]]--;
    }
    if(flag)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}