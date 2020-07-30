#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    cout<<n * *max_element(a,a+n) -accumulate(a,a+n,0);
    return 0;
}
