#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k;cin>>t;
    while(t--){
        cin>>n>>k;
        int a[n];
        int steps=INT_MAX,val=-1;
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i:a){
            if(k%i == 0 && k/i<steps){
                steps=k/i;
                val = i;
            }
        }
        cout<<val<<endl;
    }
    return 0;
}
