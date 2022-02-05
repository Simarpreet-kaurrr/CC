#include <iostream>
using namespace std;
bool aresame(int a[], int n){
    for(int i=0;i<n;i++){
        if (a[i]!=a[0]){
            return false;
        }
    }
    return true;
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        if(n<=2){
            cout<<"1"<<endl;
        }else{
            //finding the max element
            int max=a[0];
            for(int i=1; i<n;i++){
                if (a[i]>max){
                    max=a[i];
                }
            }
            //finding the no. of operations
            int count =0,i=0;
            while(n>0){
                while(i<(n-1)){
                    if(aresame(a,n)==1){
                        cout<<count<<endl;
                    }else{
                        for(int k=0; k<n; k++){
                            if(a[i]+a[i+1]==a[k]){
                                count=count+1;
                                a[i]=a[i]+a[i+1];
                                for(int j=(i+1);j<(n-1);j++){
                                    a[j]=a[j+1];
                                }
                                n=n-1;
                            }else{
                                i=i+1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}