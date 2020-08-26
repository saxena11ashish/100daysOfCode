#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,k,l;
        cin>>n>>k>>l;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)a[i]+=(k-1);
        bool flag=true;


        if(flag)cout<<"yes\n";
        else cout<<"no\n";
    }
    return 0;
}
