#include<iostream>
using namespace std;
int main(){
    int t,n,x,y;cin>>t;
    while(t--){
        cin>>n>>x>>y;
        int first,last;
        cin>>first;
        for(int i=1;i<n;i++)cin>>last;
        if(first == x && last == y)
            cout<<"BOTH\n";
        else if(first == x && last != y)
            cout<<"EASY\n";
        else if(first != x && last == y)
            cout<<"HARD\n";
        else if(first != x && last != y)
            cout<<"OKAY\n";
    }
    return 0;
}

