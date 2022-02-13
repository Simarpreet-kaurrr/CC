// Contest Code:FEB222C Problem Code:BITSWAPS
//Solved

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
                i++;
            }
            j=i,k=i;
            min=arr[i];
        }
    }

    //Checking whether the array is sorted or not:-
    int min2=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>=min2){
            min2=arr[i];
        }else{
            return 0;
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

