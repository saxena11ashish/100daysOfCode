#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;cin>>t;
    while(t--){
        cin>>n;
        if(n<31){
            cout<<"NO\n";
            continue;
        }
        else if(n==36 || n==40 || n==44)
            cout<<"YES\n"<<6<<" "<<10<<" "<<15<<" "<<n-31<<endl;
        else cout<<"YES\n"<<6<<" "<<10<<" "<<14<<" "<<n-30<<endl;
    }
    return 0;
}
