// Contest Code:FEB222C Problem Code:XORPAL
//SOLVED

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>s;
        if(n%2!=0){
            cout<<"yes"<<endl;
        }else{
            if((count(s.begin(),s.end(),'0')%2)==0 || count(s.begin(),s.end(),'0')==count(s.begin(),s.end(),'1')){
                cout<<"yes"<<endl;
            }else{
                cout<<"no"<<endl;
            }
        }
    }
    return 0;
}