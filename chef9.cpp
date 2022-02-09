//NOT SOLVED (FEB STARTER Q4)

#include <bits/stdc++.h>
using namespace std;
bool check(int f[], int g[],int n){
    for(int i=0; i<n;i++){
        if(f[i]!=g[i]){
            return false;
        }
    }
    return true;
}
int main(){
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int j=2*n;
        int a[j];
        for(int i=0;i<j;i++){
            cin>>a[i];
        }
        sort(a,a+j);
        int f[n],g[n];
        for(int k=0;k<n;k++){
            for(int i=0;i<(j);i+2){
                f[k]=a[i];
            }
            for(int i=1;i<(j);i+2){
                g[k]=a[i];
            }
        }
        if(check(f,g,n)==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}