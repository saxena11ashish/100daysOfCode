#include<iostream>
using namespace std;
int main() {
    int t,n;cin>>t;
    while(t--){
        int prime=1;
        cin>>n;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                prime=0;
                break;
            }
        }
        cout<< (prime==0 ? "no":"yes")<<endl;
    }
    return 0;
}
