#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a[10];cin>>t;
    while(t--){
        for(int i=0;i<10;i++)cin>>a[i];
        int largest=INT_MAX,second=INT_MAX;
        for(int i=0;i<10;i++){
            if(a[i]<=largest){
                second=largest;
                largest=a[i];
            }
            else if(a[i]<second)
                second=a[i];
        }
        cout<<second<<endl;
    }
    return 0;
}



