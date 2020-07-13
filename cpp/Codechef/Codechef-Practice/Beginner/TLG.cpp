#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
    int n;cin>>n;
    int initialA=0,initialB=0,a,b,temp,winner,lead=0;
    while(n--){
        cin>>a>>b;
        initialA+=a;
        initialB+=b;
        temp=abs(initialA-initialB);
        if(temp>lead){
            winner = a>b ? 1:2 ;
            lead=temp;
        }
    }
    cout<<winner<<" "<<lead;
    return 0;
}

