#include<bits/stdc++.h>
using namespace std;
void helper(int n){
    int cn=n;
    unordered_map<int,int>m;
    while(n>0){
        int r=n%10;
        if(m[r]>0){
            helper(cn+1);return;
        }
        m[r]++;
        n/=10;
    }
    cout<<cn;
    return;
}
int main(){
    int n;
    cin>>n;
    helper(n+1);
    return 0;
}
