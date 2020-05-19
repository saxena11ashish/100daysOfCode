#include<bits/stdc++.h>
using namespace std;
int main() {

        int l,b;
        cin>>l>>b;
        int p=2*(l+b);
        int a=l*b;
        if(a>p)cout<<"Area\n"<<a;
        else if(a<p)cout<<"Peri\n"<<p;
        else cout<<"Eq\n"<<a;

    return 0;
}
