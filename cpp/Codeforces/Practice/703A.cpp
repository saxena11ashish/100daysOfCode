#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mcount=0,a,b;
    while(n--){
        cin>>a>>b;
        if(a<b)mcount--;
        else if(a>b)mcount++;
    }
    if(mcount==0)cout<<"Friendship is magic!^^";
    else if(mcount<0)cout<<"Chris";
    else cout<<"Mishka";
    return 0;
}
