#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
int main() {
    int t,n;cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int ans=a[0];
        for(int i=1;i<n;i++){
            ans=gcd(ans,a[i]);
        }
        for(int i=0;i<n;i++)
            cout<<a[i]/ans<<(i+1==n?'\n':' ');
    }
    return 0;
}
