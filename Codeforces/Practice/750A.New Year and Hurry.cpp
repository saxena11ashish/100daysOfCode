#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int ans=0,time = 240-k,reqTime = 5;
    while(time>=reqTime){
        ans++;
        time-=reqTime;
        reqTime+=5;
    }
    cout<<(ans>n? n: ans);
    return 0;
}
