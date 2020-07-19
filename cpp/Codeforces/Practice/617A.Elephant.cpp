#include<bits/stdc++.h>
using namespace std;
int fun(int n){
    if (n==0)return 0;
    if(n<6)return 1;
    return n/5+ fun(n%5);
}
int main(){
    int n;
    cin>>n;
    cout<<fun(n);
    return 0;
}
