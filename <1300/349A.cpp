#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int*arr=new int[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int count25=0,count50=0;
    bool flag=true;
    for(int i=0;i<n;i++){
        if(arr[i]==25){
            count25+=1;
        }
        else if(arr[i]==50){
            if(count25<1){
                flag=false;
                break;
            }
            count25-=1;
            count50+=1;
        }
        else{
            if(count50<1){
                if(count25<3){
                    flag=false;
                    break;
                }
                count25-=3;
            }
            else{
                if(count25<1){
                flag=false;
                break;
                }
                else{
                    count25-=1;
                    count50-=1;
                }
            } 
            
        }
    }
    if(flag)
    cout<<"YES";
    else
    cout<<"NO";
    
    return 0;
}