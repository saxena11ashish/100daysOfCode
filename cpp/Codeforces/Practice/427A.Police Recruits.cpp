#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];for(int i=0;i<n;i++)cin>>a[i];
    int available=0,untreated=0;
    for(int i=0;i<n;i++){
        if(a[i]>0)available+=a[i];
        else if(a[i]==-1 ){
            if(available==0)
                untreated++;
            else available--;
        }
    }
    cout<<untreated;
    return 0;
}
