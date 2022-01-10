#include<bits/stdc++.h>
using namespace std;
 
bool solve(string s){
    for(int i=0;i<s.length();i++)
        if(s[i]!='1'&&s[i]!='4')
        return false;
    if(s[0]=='4')
    return false;
    if(s.find("444")!=s.npos)
    return false;
    return true;
} 
 
int main()
{
    string s;
    getline(cin,s);
    if(solve(s))
    cout<<"YES";
    else
    cout<<"NO";
   return 0;
}