#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,temp;cin>>n;
    unordered_map<int,int>m;
    for(int i=1;i<=n;i++){
        cin>>temp;
        m[temp]=i;
    }
    for(int i=1;i<=n;i++)cout<<m[i]<<" ";
    return 0;
}
