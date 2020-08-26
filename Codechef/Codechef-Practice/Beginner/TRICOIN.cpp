#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while(t--){
        int n,h=1;
        cin>>n;
        while(h*(h+1) <= 2*n)
            h++;
        cout<<h-1<<endl;
    }
    return 0;
}
