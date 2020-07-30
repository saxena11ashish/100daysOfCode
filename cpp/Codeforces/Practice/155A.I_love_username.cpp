#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int maxi=a[0],mini=a[0],amazing = 0;
    for(int i=1;i<n;i++){
        if(a[i]>maxi){
            amazing++;
            maxi=a[i];
        }
        else if(a[i]<mini){
            amazing++;
            mini=a[i];
        }
    }
    cout<<amazing;
    return 0;
}
