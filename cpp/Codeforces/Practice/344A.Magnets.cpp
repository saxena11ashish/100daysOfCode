#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,groups=0;cin>>n;
    char c[2*n];
    for(int i=0;i<2*n-1;i+=2){
        cin>>c[i]>>c[i+1];
    }
    for(int i=0;i<2*n-1;i++){
        if(c[i]==c[i+1])groups++;
    }
    cout<<groups+1;
    return 0;
}
