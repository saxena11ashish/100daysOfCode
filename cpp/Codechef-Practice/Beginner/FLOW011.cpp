#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while(t--){
        float basic,hra,da;
        cin>>basic;
        if(basic<1500){
            hra=.10*basic;
            da=.90*basic;
        }else{
            hra=500;
            da=.98*basic;
        }
        cout<<setprecision(2)<<fixed;
        cout<<hra+da+basic<<endl;
    }
    return 0;
}
