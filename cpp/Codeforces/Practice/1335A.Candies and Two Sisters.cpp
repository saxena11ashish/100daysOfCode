#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;cin>>t;
    while(t--){
        cin>>n;
        if(n<=2){
            cout<<0<<endl;continue;
        }
        cout<<n-(n/2 +1)<<endl;
    }
    return 0;
}
