// Contest Code:FEB222C Problem Code:NOFIX
//Solved but not by myself

#include <iostream>
using namespace std;
int main(){
    int t,n,count;
    cin>>t;
    while(t--){
        count=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]==(i+count+1)){
                count=count+1;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}