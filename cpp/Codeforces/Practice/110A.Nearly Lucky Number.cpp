#include<bits/stdc++.h>
using namespace std;
bool lucky(int n){
    if(n==0)return false;
    while(n>0){
        if(n%10!=4 && n%10!=7)return false;
        n/=10;
    }
    return true;
}
int main(){
    long long n;
    cin>>n;
    int count=0;
    while(n>0){
        if(n%10==4 || n%10==7)count++;
        n/=10;
    }
    cout<< (lucky(count) ? "YES": "NO");
    return 0;
}
