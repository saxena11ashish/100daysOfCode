#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        bool winning_a=true;
        for(int i=0;i<n-1;i++){
            if(a[i]==1){
                winning_a=!winning_a;
            }
            else break;
        }
        if(winning_a)cout<<"First\n";
        else cout<<"Second\n";
    }
    return 0;
}
