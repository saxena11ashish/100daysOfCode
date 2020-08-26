#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,ans=0;cin>>n;
    //for(long long i=1,help=-1;i<=n;i++,help*=-1)
    //    ans+=(i*help);
    if(n%2==0)
        ans=n/2;
    else
        ans=((n/2)+1)*-1;
    cout<<ans;
    return 0;
}

