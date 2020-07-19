#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,k,flag;cin>>t;
    while(t--){
        cin>>k;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(i==0 && j==0)
                    cout<<"O";
                else if(k>1){
                    cout<<".";
                    k--;
                }
                else
                    cout<<"X";
            }
            cout<<endl;
        }
    }
    return 0;
}

