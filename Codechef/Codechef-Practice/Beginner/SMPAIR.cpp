#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n],smallest=INT_MAX,smaller=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<smallest){
                smaller=smallest;
                smallest = a[i];
            }
            else if(a[i]<smaller){
                smaller=a[i];
            }
        }
        cout<<smaller+smallest<<endl;
    }
    return 0;
}

