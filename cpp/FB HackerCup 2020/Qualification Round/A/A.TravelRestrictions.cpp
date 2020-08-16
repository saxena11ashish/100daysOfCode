#include<bits/stdc++.h>
using namespace std;
int main(){
    string I,O;
    int t,n;cin>>t;
    for(int test=1;test<=t;test++){
        cin>>n;
        cin.ignore();
        cin>>I>>O;
        int matrix[n+1][n+1]={0};
        vector< vector<int>> v(n+1,vector<int>(n+1,2));
        for(int i=1;i<=n;i++){
            if(I[i-1]=='N'){
                for(int j=1;j<=n;j++)
                    v[j][i]=0;
            }
            if(O[i-1]=='N'){
                for(int j=1;j<=n;j++)
                    v[i][j]=0;
            }
            v[i][i]=1;
        }
        if(v[1][2]==2)v[1][2]=1;
        if(v[n][n-1]==2)v[n][n-1]=1;
        for(int i=2;i<=n-1;i++){
            if(v[i][i-1]==2)v[i][i-1]=1;
            if(v[i][i+1]==2)v[i][i+1]=1;
        }
        for(int i=1;i<=n;i++){
            for(int j=i+2;j<=n;j++){
                if(v[i][j]==2){
                    if(v[i][j-1]==1 && v[j-1][j]==1)v[i][j]=1;
                    else v[i][j]=0;
                }
            }
            for(int j=i-2;j>=1;j--){
                if(v[i][j]==2){
                    if(v[i][i-1]==1 && v[i-1][j]==1)v[i][j]=1;
                    else v[i][j]=0;
                }
            }
        }
        cout<<"Case #"<<test<<":\n";
        for(int i=1;i<n+1;i++){
            for(int j=1;j<n+1;j++){
                cout<<(v[i][j]==0 ? "N":"Y");
            }cout<<"\n";
        }

    }

    return 0;
}
