#include<iostream>
using namespace std;
int main() {
    int t,n;cin>>t;
    while(t--){
        cin>>n;
        int last=n%10;
        while(n>9){
            n/=10;
        }
        cout<<n+last<<endl;
    }
    return 0;
}

