#include<iostream>
using namespace std;
int main() {
    int t,a,b;cin>>t;
    while(t--){
        cin>>a>>b;
        int max=a+b;
        a = a>=b ? a : b ;
        cout<<a<<" "<<max<<endl;
    }
    return 0;
}

