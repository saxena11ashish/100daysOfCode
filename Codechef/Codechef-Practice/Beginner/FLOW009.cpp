#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    float quantity,price;
    while(t--){
        cin>>quantity>>price;
        cout<<setprecision(6)<<fixed;
        price*=quantity;
        if(quantity>100)
            cout<< price*0.90;
        else
            cout<<price;
        cout<<endl;
    }
    return 0;
}
