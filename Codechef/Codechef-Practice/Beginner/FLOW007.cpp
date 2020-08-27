#include<iostream>
using namespace std;

int reverse(int n){
    int nn=0,r;
    while(n>0){
        r=n%10;
        nn=nn*10+r;
        n/=10;
    }
    return nn;
}
int main() {
    int t,n;cin>>t;
    while(t--){
        cin>>n;
        cout<<reverse(n)<<endl;
    }
    return 0;
}

