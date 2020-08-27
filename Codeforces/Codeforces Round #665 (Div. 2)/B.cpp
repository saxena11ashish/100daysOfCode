#include<bits/stdc++.h>
using namespace std;
void solve(){
    int x1,y1,z1,x2,y2,z2;
    cin>>x1>>y1>>z1>>x2>>y2>>z2;
    long long ans = 0,temp =min(z1,y2);
    ans = ans+ 2*temp;
    z1-=temp;
    y2-=temp;
    temp=min(z1,z2);
    z1-=temp;
    z2-=temp;
    temp=min(z2,x1);
    z2-=temp;
    x1-=temp;
    ans = ans - 2*z2 ;
    cout<<ans<<endl;
    return;
}
int main(){
    int t=1;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
