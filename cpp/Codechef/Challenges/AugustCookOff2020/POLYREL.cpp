#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,ans=0,temp,i=0;cin>>n;
        while(i++<n)cin>>temp;i=0;while(i++<n)cin>>temp;
        if(n<=5)
            ans=n;
        else{
            ans+=n;
            while(n>5){
                ans+=(n/2);
                n/=2;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
