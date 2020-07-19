#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    cout<< (accumulate(a,a+n,0)==0 ? "Easy": "HARD");
    return 0;
}

