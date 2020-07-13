#include<iostream>
using namespace std;
int main() {
    int t,n;cin>>t;
    while(t--){
        cin>>n;
        int cn=n,nn=0,r;
        while(n>0){
            r=n%10;
            nn=nn*10+r;
            n/=10;
        }
        cout<<(nn==cn ? "wins":"losses")<<endl;
    }
    return 0;
}
