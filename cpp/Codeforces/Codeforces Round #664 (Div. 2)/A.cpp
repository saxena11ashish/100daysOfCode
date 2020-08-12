#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int a[4];
        int odd=0;
        for(int i=0;i<4;i++){
            cin>>a[i];
            odd+=(a[i]%2);
        }
        bool possible;
        if(odd<=1 || odd==4)
            possible = true;
        else if(odd==3) {
            if(a[0]>0 && a[1]>0 && a[2]>0)
                possible = true;
            else possible = false;
        }
        else
            possible=false;
        cout<< (possible ? "YES":"NO")<<endl;
    }
    return 0;
}
