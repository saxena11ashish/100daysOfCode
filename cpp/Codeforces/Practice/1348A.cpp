#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;cin>>t;
    while(t--){
        cin>>n;
        int ans=0,i=1;
        for(    ;i<=n/4;i++)ans+=pow(2,i);
        for(    ;i<=(3*n)/4;i++)ans-=pow(2,i);
        for(    ;i<=n;i++)ans+=pow(2,i);
        cout<<ans;
    }
    return 0;
}
