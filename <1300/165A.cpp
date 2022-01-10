#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   int n;
   cin>>n;
   vector<pair<int,int>> v;
   for(int i=0;i<n;i++){
       int x,y;
       cin>>x>>y;
       v.push_back(make_pair(x,y));
   }
   int count = 0;
   for(int i=0;i<n;i++){
       int x=v[i].first;
       int y = v[i].second;
       int r=0,l=0,t=0,b=0;
       for(int j=0;j<n;j++){
           if(v[j].first>x&&v[j].second==y)
           b++;
           else if(v[j].first<x&&v[j].second==y)
           t++;
           else if(v[j].first==x&&v[j].second<y)
           l++;
           else if(v[j].first==x&&v[j].second>y)
           r++;
           if(r>0&&l>0&&t>0&&b>0){
                if((r+l+t+b)>=4)
                {
                    count++;
                    break;
                }
           }
       }
   }
   cout<<count;
   
    return 0;
}