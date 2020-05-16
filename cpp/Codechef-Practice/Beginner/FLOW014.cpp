#include<iostream>
using namespace std;
int main() {
    int t,hardness,strength;cin>>t;
    float carbon;
    while(t--){
        cin>>hardness>>carbon>>strength;
        bool one = hardness>50;
        bool two = carbon<0.7;
        bool three = strength>5600;

        if(one && two && three)cout<<"10\n";
        else if(one && two && !three)cout<<"9\n";
        else if(!one && two && three)cout<<"8\n";
        else if(one && !two && three)cout<<"7\n";
        else if(!one && !two && !three)cout<<"5\n";
        else cout<<"6\n";
    }
    return 0;
}
