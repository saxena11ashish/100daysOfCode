#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=1;cin>>t;
    for(int i=1;i<=t;i++){
        int n;cin>>n;
        int a[n];for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n-1;i++)
            a[i]=a[i]-a[i+1];
        n--;
        int maxi=1;
        for(int i=0;i<n-1;i++){
            int count=1;
            while(a[i]==a[i+1] && i<n-1){
                count++;i++;
            }
            maxi = max(count,maxi);
        }
        cout<<"Case #"<<i<<": "<<maxi+1<<endl;
    }
    return 0;
}
