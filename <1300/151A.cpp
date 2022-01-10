#include<bits/stdc++.h>
using namespace std;
 
void solve(string s){
    cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
}
 
int main()
{
   int n, k, l, c, d, p, nl, np;
   cin>>n>>k>>l>>c>>d>>p>>nl>>np;
   int ans = min(k*l/nl,c*d);
   ans = min(ans,p/np);
   ans = ans/n;
   cout<<ans;
   
    return 0;
}