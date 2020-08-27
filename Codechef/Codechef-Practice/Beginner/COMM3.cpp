#include<bits/stdc++.h>
using namespace std;
bool func(int x,int y,int r){
    return x*x+y*y<=r*r;
}
int main() {
    int t;cin>>t;
    while(t--){
        int r,x1,x2,x3,y1,y2,y3;
        cin>>r>>x1>>y1>>x2>>y2>>x3>>y3;
        int count=0;
        if(func(x1-x2,y1-y2,r)) count++;
        if(func(x1-x3,y1-y3,r)) count++;
        if(func(x3-x2,y3-y2,r)) count++;
        if(count>1)cout<<"yes\n";
        else cout<<"no\n";
    }
    return 0;
}
