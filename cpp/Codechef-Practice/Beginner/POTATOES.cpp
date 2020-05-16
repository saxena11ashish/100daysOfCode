#include<bits/stdc++.h>
using namespace std;
int findNextPrime(int n){

    if(n==1)return 2;
    if(n==2)return 3;
    if(n%2==0)
        return findNextPrime(n+1);
    for(int i=3;i*i<=n;i++){
        if(n%i==0)
            return findNextPrime(n+1);
    }
    return n;
}
int main() {
    int t;cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        cout<<findNextPrime(x+y+1)-x-y<<endl;
    }
    return 0;
}
