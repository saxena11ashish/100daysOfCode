#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b;cin>>t;
    while(t--){
        cin>>a>>b;
        cout<<pow(max(max(a,b),(2*min(a,b))),2)<<endl;
    }
    return 0;
}
