#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,h,p;cin>>t;
    while(t--){
        long long power;
        cin>>h>>p;
        while(h>0 && p>0){
            h-=p;
            p/=2;
        }
        cout<<(h>0 ? 0:1)<<endl;
    }
    return 0;
}
