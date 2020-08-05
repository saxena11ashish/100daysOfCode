#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        if(n==1){
            cout<<"YES\n";
            continue;
        }
        sort(a,a+n);
        bool flag=true;
        for(int i=0;i<n-1;i++){
            if(!(abs(a[i]-a[i+1])<=1)){
                flag=false;break;
            }
        }
        if(flag)cout<<"YES\n";
        else cout<<"NO\n";

    }
    return 0;
}
