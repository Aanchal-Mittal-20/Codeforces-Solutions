#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    getline(cin,s);
    string check="hello";
    int j=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==check[j]){
            j++;
        }
    }
    if(j==5)
    cout<<"YES";
    else{
        cout<<"NO";
    }
    
    
   return 0;
}