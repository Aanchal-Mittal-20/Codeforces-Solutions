#include<iostream>
#include<iomanip>
#include<map>
#include<algorithm>
#include<cmath>
#include<stack>
#include<queue>
#include<vector>
#include<cctype>
#include<string>
#include<stdlib.h>
using namespace std;
 
int main(){
  int n,flag1=0,flag2=0;
  cin>>n;
  string s;
  cin>>s;
  string l,r;
  l=s.substr(0,n);
  r=s.substr(n,2*n);
  sort(l.begin(),l.end());
  sort(r.begin(),r.end());
  for(int i=0;i<n;i++)
  {
      if(l[i]<=r[i])
      {
          flag1=1;break;
      }
  }
  for(int i=0;i<n;i++)
  {
      if(l[i]>=r[i])
      {
          flag2=1;break;
      }
  }
  if(flag1==0||flag2==0)
  cout<<"YES";
  else
  cout<<"NO";
return 0;
}