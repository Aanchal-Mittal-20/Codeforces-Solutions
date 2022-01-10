#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    getline(cin,s);
    char cur=s[0];
    int count=1;
    bool danger=false;
    for(int i=1;i<s.length();i++){
        if(count==7){
            danger=true;
            break;
        }
        if(s[i]==cur){
            count++;
        }
        else{
            count=1;
        }
        cur=s[i];
    }
    if(count==7)
    danger=true;
    if(danger)
    cout<<"YES";
    else
    cout<<"NO";
    
   return 0;
}