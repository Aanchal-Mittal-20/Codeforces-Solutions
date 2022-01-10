#include<bits/stdc++.h>
using namespace std;
 
void solve(string s){
    int count=0;
    for(int i=0;i<s.length();i++)
    if(s[i]=='0')
    count++;
    if(count==0)
    {
        s.erase(s.begin()+1);
        cout<<s;
        return;
    }
    int index=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='0'){
            s.erase(s.begin()+i);
            break;
        }
    }
    cout<<s;
}
 
int main()
{
    string s;
    getline(cin,s);
    solve(s);
    
    return 0;
}