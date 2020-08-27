#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,d;cin>>t;
    while(t--){
        cin>>d;
        string s="abcdcefghijklmn";
        s.erase(d);
        int n=s.size();
        int distinct=(n*(n+1))/2,palin=d;
        while(distinct-palin!=4){

        }


        cout<<s;
    }
    return 0;
}
