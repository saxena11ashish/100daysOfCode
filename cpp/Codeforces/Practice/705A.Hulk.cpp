#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    string l="I love ",h="I hate ";
    for(int i=1;i<=n;i++){
        if(i%2!=0)
            cout<<h;
        else
            cout<<l;
        if(i<n)
            cout<<"that ";
    }
    cout<<"it";
    return 0;
}
