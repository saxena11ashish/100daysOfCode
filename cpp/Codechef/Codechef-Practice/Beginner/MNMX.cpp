#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        cout<<((n-1) * *min_element(a,a+n))<<endl;
    }
    return 0;
}
