#include<iostream>
using namespace std;
int main() {
    int n,weapon,ready=0;cin>>n;
    while(n--){
        cin>>weapon;
        if(weapon%2==0)ready++;
        else ready--;
    }
    cout<<(ready<=0 ? "NOT READY":"READY FOR BATTLE")<<endl;
    return 0;
}
