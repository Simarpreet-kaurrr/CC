// Contest Code:FEB222C Problem Code:WCC 
//SOLVED

#include <iostream>
using namespace std;
int main(){
    int t,x;
    string r;
    cin>>t;
    char c='C';
    char n='N';
    char d='D';
    int Carlesan=0,Chef=0;
    while(t--){
        cin>>x;
        cin>>r;
        for(int i=0;i<r.length();i++){
            if(r[i]=='C'){
                Carlesan=Carlesan+2;
            }
            else if(r[i]=='D'){
                Carlesan=Carlesan+1;
                Chef=Chef+1;
            }
            else if(r[i]=='N'){
                Chef=Chef+2;
            }
        }
        if(Carlesan>Chef){
            cout<<60*x<<endl;
        }else if(Carlesan<Chef){
            cout<<40*x<<endl;
        }else if(Carlesan==Chef){
            cout<<55*x<<endl;
        }
        Carlesan=0;
        Chef=0;
    }
    return 0;
}