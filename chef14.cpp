// Contest Code:FEB222C Problem Code:BITSWAPS
//Not Solved

#include <iostream>
using namespace std;
bool checksort(int arr[], int n){

    //Sorting the array using swapping only if a[i]&a[j]!=0 :-
    int swap=0;
    int min=arr[0];
    int k=0;
    for(int i=0,j=(i+1); i<n,j<n; j++){
        if((arr[j]&arr[i]) && (arr[j]<min)){
            min=arr[j];
            k=j;
            swap=1;
        }
        if(j==(n-1)){
            if(swap==1){
                arr[k]=arr[i];
                arr[i]=min;
                swap=0;
            }else{
                int min2=arr[i];
                for(int m=i+1;m<n;m++){
                    if(arr[m]<min2){
                        return 0;
                    }
                }
                i++;
            }
            j=i,k=i;
            min=arr[i];
        }
    }
    return 1;
}

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(checksort(arr,n)==1){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}

