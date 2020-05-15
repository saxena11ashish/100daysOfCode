#include<bits/stdc++.h>
#define long long int lli
using namespace std;
int gcd(int a, int b){
    if(b==0)    return a;
    return gcd(b,a%b);
}
int main(){
    int t;cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int hcf=gcd(a,b),lcm;
        lcm= a*b/hcf;
        cout<<hcf<<" "<<lcm<<endl;
    }
}
