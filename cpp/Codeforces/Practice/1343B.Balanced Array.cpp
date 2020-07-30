#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;cin>>t;
    while(t--){
        cin>>n;
        if((n/2)%2!=0)cout<<"NO\n";
        else{
            cout<<"YES\n";
            int x=2,sum=0;
            for(int i=1;i<=n/2;i++,x+=2){
                cout<<x<<" ";
                sum+=x;
            }
            x=1;
            for(int i=1;i<n/2;i++,x+=2){
                cout<<x<<" ";
                sum-=x;
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}

