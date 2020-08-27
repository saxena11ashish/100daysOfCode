#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w,ans=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++){
        ans=ans + i*k;
    }
    cout<<max(ans-n,0);
    return 0;
}

