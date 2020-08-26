#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    int count=0;
    while(t>0){
        count++;
        t/=10;
        if(count>3)
            break;
    }
    if(count>3)cout<<"More than 3 digits";
    else cout<<count;
    return 0;
}

