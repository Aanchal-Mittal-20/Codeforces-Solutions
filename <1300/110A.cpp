#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   long long n;
   cin>>n;
   string s = to_string(n);
   bool isLucky = false;
   int arr[] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
   int count = 0;
   for(long long i=0;i<s.length();i++){
        if(s[i] == '4' || s[i] == '7')
        count++;
   }
   for(int i=0;i<14;i++){
       if(count == arr[i]){
            isLucky = true;
            break;
       }
   }
   if(isLucky)
   cout<<"YES";
   else
   cout<<"NO";
    return 0;
}