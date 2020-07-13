#include<iostream>
#include<iomanip>   // used for setprecision()
using namespace std;
int main(){
    int take;
    float balance;
    cin>>take>>balance;
    if(take >= balance-0.50 || take%5 != 0) cout<<balance<<endl;
    else {
            cout<<setprecision(2)<<fixed;   //fixed if not used then result might show up as exponent
            cout<<(balance - take) - 0.50<<endl;
    }
    return 0;
}
