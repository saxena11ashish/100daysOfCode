#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    double a[n],ans=0;
    for(int i=0;i<n;i++)cin>>a[i];
    cout<<setprecision(12);
    for(int i=0;i<n;i++){
        ans+=(a[i]/100);
    }
    ans/=n;
    cout<<ans*100;

    return 0;
}
