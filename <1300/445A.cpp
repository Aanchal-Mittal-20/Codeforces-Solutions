#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,m;
    cin>>n>>m;
    cin.ignore();
    for(int i=0;i<n;i++){
        string s;
        getline(cin,s);
        for(int j=0;j<m;j++){
            if(s[j]!='-'){
                if(i%2==0){
                    if(j%2==0)
                    cout<<'B';
                    else
                    cout<<'W';
                }
                else{
                    if(j%2==0)
                    cout<<'W';
                    else
                    cout<<'B';
                }
            }
            else{
                cout<<'-';
            }
        }
        cout<<endl;
    }
    
   return 0;
}