//Bitwise Blend
// Contest Code:FEB221C Problem Code:BITBLEND

// 2
// 0 0  //-1
// 3
// 6 16 69  // 1 (1 ,3)
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t,n,count;
    cin>>t;
    while(t--){
        cin>>n;
        int s[n];
        count=0;
        vector<int> jwaab;
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        for(int i=1;i<n;i++){
            if(s[i]%2==0 && s[i-1]%2==0){
                int j=0;
                while(j<n){
                    if(j!=i && ((s[i]^s[j])%2!=0)){
                        s[i]=s[i]^s[j];
                        jwaab.push_back(i+1);
                        jwaab.push_back(j+1);
                        count=count+1;
                        break;
                    }
                    j++;
                }
            }else if(s[i]%2!=0 && s[i-1]%2!=0){
                int j=0;
                while(j<n){
                    if(j!=i && ((s[i]^s[j])%2==0)){
                        s[i]=s[i]^s[j];
                        jwaab.push_back(i+1);
                        jwaab.push_back(j+1);
                        count=count+1;
                        break;
                    }
                    j++;
                }
            }
        }
        cout<<count<<endl;
        count=0;
    }
    return 0;
}
