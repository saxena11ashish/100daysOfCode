#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while(t--){
        int apple,orange,coins;
        cin>>apple>>orange>>coins;
        int temp = abs(apple-orange);
        if(temp<coins)cout<<"0\n";
        else cout<<temp-coins<<endl;
    }
    return 0;
}
