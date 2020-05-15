#include<iostream>
using namespace std;
int main() {
    int t,n;cin>>t;
    while(t--){
        cin>>n;
        int a[n+1]={0};
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cin>>a[j];
                if(a[j]>a[j+1]){
                    max=a[j];
                    index[j];
                }else{
                    max=a[j+1];
                    index=j+1;
                }
                sum+=;
            }
        }
    }

    return 0;
}
