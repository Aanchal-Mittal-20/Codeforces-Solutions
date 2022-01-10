#include<bits/stdc++.h>
using namespace std;
 
bool solve(string s,string t){
    if(s.length()!=t.length())
    return false;
    int n=s.length();
    for(int i=0;i<s.length();i++){
        if(s[i]!=t[n-i-1])
        return false;
    }
    return true;
} 
 
int main()
{
    string s,t;
    getline(cin,s);
    getline(cin,t);
    if(solve(s,t))
    cout<<"YES";
    else
    cout<<"NO";
   return 0;
}