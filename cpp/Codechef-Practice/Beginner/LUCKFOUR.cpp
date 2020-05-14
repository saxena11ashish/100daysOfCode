
#include<iostream>
using namespace std;
int main() {
    int t,n;cin>>t;
    while(t--){
        int four=0;
        cin>>n;
        while(n>0){
            if(n%10 == 4)
                four++;
            n/=10;
        }
        cout<<four<<endl;
    }
    return 0;
}
