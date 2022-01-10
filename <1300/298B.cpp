#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t,sx,sy,ex,ey;
    cin>>t>>sx>>sy>>ex>>ey;
    cin.ignore();
    string s;
    getline(cin,s);
    bool flag=false;
    int ans=-1;
    for(int i=0;i<s.length();i++){
        if(s[i]=='E'&&sx<ex){
            sx++;
        }
        else if(s[i]=='W'&&sx>ex){
            sx--;
        }
        else if(s[i]=='N'&&sy<ey){
            sy++;
        }
        else if(s[i]=='S'&&sy>ey){
            sy--;   
        }
        if(ex==sx&&ey==sy){
            flag=true;
            ans=i+1;
            break;
        }
        
    }
    cout<<ans;
    
    
   return 0;
}