#include <iostream>
#include <sstream>
#include <typeinfo>
#include <string>
using namespace std;

void chep(int x, string &lol){
    string hm=to_string(x);
    for(int i=0;i<hm.length();i++){
        lol.push_back(hm[i]);
    }
}

string balls(string S, long int K, long int M){
    static string lol;
    static string hey;
    if(M<1){
        return hey;
    }
    else{
        if(S.empty()){
            hey=lol;
            lol.clear();
            return balls(hey,K,M-1);
        }else{
            int y=S.at(0)-'0';
            chep(y*K,lol);
            return balls(S.substr(1),K,M);
        }
    }
}

int main(){
    int t,n;
    long int m,k;
    string s;
    cin>>t;
    while(t--){
        cin>>n>>k>>m;
        cin>>s;
        string ans=balls(s,k,m);
        cout<<(ans.length()%1000000007)<<endl;
    }
    return 0;
}
