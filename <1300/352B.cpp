#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    map<int,vector<int>> mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x].push_back(i);
    }
    int count=0;
    vector<pair<int,int>> v;
    for(auto it:mp){
        bool flag=true;
        if(it.second.size()==1){
            count++;
            v.push_back({it.first,0});
        }
        else{
            int val = it.second[1]-it.second[0];
            for(int i=1;i<it.second.size()-1;i++){
                if((it.second[i+1]-it.second[i])!=val){
                    flag=false;
                    break;
                }
            }
            if(flag){
                count++;
                v.push_back({it.first,val});
            }
        }
    }
    cout<<count<<endl;
    for(auto it:v){
        cout<<it.first<<" "<<it.second;
        cout<<endl;
    }
    
   return 0;
}