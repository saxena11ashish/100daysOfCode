#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,sx,sy;
    cin>>n>>m>>sx>>sy;
    for(int i=sy;i>=1;i--)cout<<sx<<" "<<i<<endl;
    for(int i=sy+1;i<=m;i++)cout<<sx<<" "<<i<<endl;
    int i = sx+1;
    bool lastRight=true;
    while(i<=n){
        if(lastRight)
            for(int j=m;j>=1;j--) cout<<i<<" "<<j<<endl;
        else
            for(int j=1;j<=m;j++) cout<<i<<" "<<j<<endl;
        lastRight=!lastRight;
        i++;
    }
    i=sx-1;
    while(i>=1){
        if(lastRight)
            for(int j=m;j>=1;j--) cout<<i<<" "<<j<<endl;
        else
            for(int j=1;j<=m;j++) cout<<i<<" "<<j<<endl;
        lastRight=!lastRight;
        i--;
    }
    return 0;
}
