//Binary Base Basics
// Contest Code:FEB221C Problem Code:BINBASBASIC

#include <iostream>
using namespace std;

int main(){
    int t,n,k,count=0;
    string a;
    cin>>t;
    while(t--){
        cin>>n>>k;
        cin>>a;
        for(int i=0;i<(n/2);i++){
            if(a[i]!=a[n-i-1]){
                count=count+1;
            }
        }
        cout<<count<<endl;
        if(count<=k){
            if((n%2)!=0){
                cout<<"YES"<<endl;
            }else if((k-count)%2==0){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }
        count=0;
    }
    return 0;
}