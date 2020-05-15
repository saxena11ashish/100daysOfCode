#include<iostream>
using namespace std;
int main() {
    int t;cin>>t;
    while(t--){
        char a;
        cin>>a;
        if(a=='b'||a=='B')cout<<"BattleShip";
        else if(a=='c'||a=='C')cout<<"Cruiser";
        else if(a=='d'||a=='D')cout<<"Destroyer";
        else if(a=='f'||a=='F')cout<<"Frigate";
        cout<<endl;
    }
    return 0;
}
