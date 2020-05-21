#include<bits/stdc++.h>
using namespace std;
int numberOfZeroesInFactorialOf(int n){
    int count=0;
    for(int i=5;i<=n;i*=5)
        count=count+ (n/i);
    return count;
}
int main() {
    int t,n;cin>>t;
    while(t--){
        cin>>n;
        cout<<numberOfZeroesInFactorialOf(n)<<endl;
    }
    return 0;
}
