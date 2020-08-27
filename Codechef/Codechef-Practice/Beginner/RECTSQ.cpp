#include<bits/stdc++.h>
using namespace std;
int hcf(int a,int b){
    if(b==0)
        return a;
    return hcf(b,a%b);
}
int main() {
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        int gcd = hcf(n,m);
        n/=gcd; m/=gcd;
        cout<<n*m<<endl;
    }
}
