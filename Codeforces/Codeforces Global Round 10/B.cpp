#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int odd[n],even[n],maxi = *max_element(a,a+n);
        for(int i=0;i<n;i++)
            odd[i] = maxi - a[i];
        maxi = *max_element(odd,odd+n);
        for(int i=0;i<n;i++)
            even[i] = maxi - odd[i];
        if(k%2==0)
            for(int i:even)cout<<i<<" ";
        else
            for(int i:odd)cout<<i<<" ";
        cout<<endl;
    }
}
