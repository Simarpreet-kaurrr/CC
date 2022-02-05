#include <iostream>
#include <string>
using namespace std;

int main(){
    int t,n;
    long int m,k;
    string s;
    cin>>t;
    while(t--){
        int i=0;
        cin>>n>>k>>m;
        cin>>s;
        while(m>0){
            static string lol;
            if(s.empty()){
                s=lol;
                lol.clear();
                m=m-1;
            }else{
                int y=s.at(0)-'0';
                string hm=to_string(y*k);
                for(int i=0;i<hm.length();i++){
                    lol.push_back(hm[i]);
                }
                s=s.substr(1);
            }
        }
        cout<<(s.length()%1000000007)<<endl;
    }
    return 0;
}