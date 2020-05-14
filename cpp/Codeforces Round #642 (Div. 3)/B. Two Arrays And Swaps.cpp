#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,n,k;cin>>t;
    while(t--){
        cin>>n>>k;
        int a[n],b[n];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        int i=0,j=n-1;
        while(k--){
            if(a[i]<b[j]){
                a[i++] = b[j--];
            }
        }
        cout<<accumulate(a,a+n,0)<<endl;
    }
    return 0;
}

