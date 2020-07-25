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
        matrix[1][2]=1;
        matrix[n][n-1]=1;
        for(int i=2;i<=n-1;i++){
            matrix[i][i-1]=1;
            matrix[i][i+1]=1;
        }
        for(int i=1;i<=n;i++){//traverse I and O
            if(I[i-1]=='N'){
                for(int j=1;j<=n;j++)
                    matrix[j][i]=2;
            }
            if(O[i-1]=='N'){
                for(int j=1;j<=n;j++)
                    matrix[i][j]=2;
            }
            matrix[i][i]=1;
        }
        for(int i=1;i<=n;i++){  //fill remaining
            for(int j=i-2;j>=1;j--){
                if(matrix[i][j]==0){
                    if(matrix[i][j+1]==2)matrix[i][j]=2;
                    else{
                        if(matrix[j-1][j]==1)matrix[i][j]=1;
                        else matrix[i][j]=2;
                    }
                }
            }
            for(int j=i+2;j<=n;j++){
                if(matrix[i][j]==0){
                    if(matrix[i][j-1]==2)matrix[i][j]=2;
                    else{
                        if(matrix[j-1][j]==1)matrix[i][j]=1;
                        else matrix[i][j]=2;
                    }
                }
            }
        }
        cout<<"Case #"<<t<<":\n";
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++)
                cout<<(matrix[i][j]==1 ? "Y ":"N ");
            cout<<"\n";
        }
    }

    return 0;
}
