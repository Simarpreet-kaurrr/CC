#include <iostream>
#include <string>
using namespace std;

int main(){
    int t,n;
    long int m,k;
    string s,lol;
    cin>>t;
    while(t--){
        cin>>n>>k>>m;
        cin>>s;
        while(m>0){
            if(s.empty()){
                s=lol;
                lol.clear();
                m=m-1;
            }else{
                int y=s.at(0)-'0';
                string hm=to_string(y*k);
                lol.append(hm);
                s=s.substr(1);
            }
        }

        cout<<(s.length()%1000000007)<<endl;
    }
    return 0;
}






