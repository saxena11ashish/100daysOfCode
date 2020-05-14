#include<iostream>
using namespace std;
int main() {
    int t,n;cin>>t;
    while(t--){
        cin>>n;
        long long int a = 1;
        while(n>1){
            a*=n;
            n--;
        }
        cout<<a<<endl;
    }
    return 0;
}

