#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int a,b,n;
    cin>>a>>b>>n;
    bool flag=false;
    string res="";
    int num=a;
    string s=to_string(a);
    for(int i=0;i<=9;i++){
        s.push_back(i+'0');
        num=stoi(s);
        if(num%b==0){
            flag=true;
            res=s;
            for(int i=1;i<n;i++)
            res.push_back('0');
            break;
        }
        s.pop_back();
    }
    if(!flag)
    cout<<-1;
    else
    cout<<res;
    
    return 0;
}