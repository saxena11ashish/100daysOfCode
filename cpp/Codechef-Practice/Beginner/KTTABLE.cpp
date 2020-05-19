#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n],temp,count=0;
        for(int i=0;i<n;i++)cin>>a[i];

        cin>>temp;
        if(temp<=a[0])
            count++;
        for(int i=1;i<n;i++){
            cin>>temp;
            if(temp<=a[i]-a[i-1])count++;
        }
        cout<<count<<endl;
    }
}
