#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;cin>>t>>n;
    cout<<min(t,n)<<" "<<(max(t,n)- min(t,n))/2;
    return 0;
}
