#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,k,kk;
        cin>>n>>k;
        kk=k;
        int w[n];
        for(int i=0;i<n;i++)cin>>w[i];
        if(*max_element(w,w+n)>k){
            cout<<-1<<endl;
            continue;
        }
        int rounds = 0;
        for(int i=0;i<n;    ){
            k=kk;
            while(k-w[i]>=0 && i<n){
                k-=w[i];
                i++;
            }
            rounds++;
        }
        cout<<rounds<<endl;
    }
    return 0;
}
