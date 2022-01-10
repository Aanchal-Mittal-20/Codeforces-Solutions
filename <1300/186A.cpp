#include<bits/stdc++.h>
using namespace std;
 
bool solve(string a,string b){
    if(a.length()!=b.length())
    return false;
    int count=0;
    string s1="";
    string s2="";
    for(int i=0;i<a.length();i++){
        if(a[i]!=b[i]){
            count++;
            s1.push_back(a[i]);
            s2.push_back(b[i]);
            if(count>2)
            return false;
        }
    }
    if(s1[0]==s2[1]&&s1[1]==s2[0])
    return true;
    return false;
}
 
int main()
{
    string a,b;
    getline(cin,a);
    getline(cin,b);
    if(solve(a,b))
    cout<<"YES";
    else
    cout<<"NO";
    
    return 0;
}