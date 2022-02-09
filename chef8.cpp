//SOLVED....(FEB STARTER Q3)

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,i,j;
    cin>>t;
    set<int> iS; 
    set<int> jS; 
    while(t--){
        cin>>n;
        while(n--){
            cin>>i>>j;
            iS.insert(i);
            jS.insert(j);
        }
        cout<<iS.size()+jS.size()<<endl;
        iS.clear();
        jS.clear();
    }
    return 0;
}
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main(){
//     int t,n,i,j;
//     cin>>t;
//     vector <int> iv,jv;
//     while(t--){
//         cin>>n;
//         while(n--){
//             cin>>i>>j;
//             if (find(iv.begin(), iv.end(), i) == iv.end()) {
//                 iv.push_back(i);
//             }
//             if (find(jv.begin(), jv.end(), j) == jv.end()) {
//                 jv.push_back(j);
//             }
//         }
//         cout<<iv.size()+jv.size()<<endl;
//         iv.clear();
//         jv.clear();
//     }
//     return 0;
// }