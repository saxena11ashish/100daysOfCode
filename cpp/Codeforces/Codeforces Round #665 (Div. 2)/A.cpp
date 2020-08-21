#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k,ans;
    cin>>n>>k;
    if(n==k)
        ans=0;
    else if((n%2==0 && k%2==0) || (n%2!=0 && k%2!=0)){
        if(n>=k)ans=0;
        else ans=k-n;
    }
    else{
        if(n>k)ans=1;
        else ans=k-n;
    }
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
