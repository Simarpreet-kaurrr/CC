//NOT SOLVED............(FEB STARTER Q2)

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,x;
	cin>>t;
	while(t--){
	    cin>>n>>x;
        if(n==1){
            if(x%2==0){
                cout<<0<<endl;
            }else{
                cout<<1<<endl;
            }
        }else{
	    if(x<=n){
	        cout<<x<<endl;
	    }else{
            int i=x/n;
            int k=(n*i)+i;
            if(x>=k){
                cout<<(x-k)<<endl;
            }else{
                int l=(n*(i-1))+(i-1);
                cout<<(x-l)<<endl;
            }
	    }
        }
	}
	return 0;
}