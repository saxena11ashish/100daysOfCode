#include<bits/stdc++.h>
using namespace std;
int main(){
    int onboard=0,capacity=0,n,z,x;
    cin>>n;
    while(n--){
        cin>>z>>x;
        onboard+=(x-z);
        capacity=max(capacity,onboard);
    }
    cout<<capacity;
    return 0;
}
