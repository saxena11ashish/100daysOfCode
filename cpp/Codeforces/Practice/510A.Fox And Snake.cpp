#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;cin>>n>>m;
    bool end=true;
    for(int i=0;i<n;i+=2){
        for(int j=0;j<m;j++)cout<<"#";
        if(i==n-1)break;
        cout<<endl;
        if(end){
            for(int j=0;j<m-1;j++)cout<<".";
            cout<<"#";
        }
        else{
            cout<<"#";
            for(int j=0;j<m-1;j++)cout<<".";
        }
        end=!end;
        cout<<endl;
    }
    return 0;
}
