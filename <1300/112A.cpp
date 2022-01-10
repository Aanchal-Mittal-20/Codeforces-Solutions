#include<bits/stdc++.h>
using namespace std;
 
void solve(string a,string b){
    if(a==b){
        cout<<0<<endl;
        return;
    }
    else if(a<b){
        cout<<-1<<endl;
        return;
    }
    else{
        cout<<1<<endl;
        return;
    }
}
 
int main()
{
   string a,b;
   cin>>a>>b;
   transform(a.begin(),a.end(),a.begin(),::tolower);
   transform(b.begin(),b.end(),b.begin(),::tolower);
   solve(a,b);
    return 0;
}