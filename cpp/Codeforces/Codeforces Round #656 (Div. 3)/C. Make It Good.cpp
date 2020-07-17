#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;cin>>t;
    while(t--){
        cin>>n;
        int *a = new int(n);
        for(int i=0;i<n;i++)cin>>a[i];
        int flag=0;
        for(int i=1;i<n;i++){
            if(a[i-1]>a[i]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<0<<endl;continue;
        }
        bool inc = true;
        int i=n-1,count=0;
        while(i>0 && count>=0){
            if(a[i]<=a[i-1] && inc==true){
                i--;
                count++;
            }
            else{
                if(count==0 && inc==true)
                    i--;
                inc=false;
                count--;
                i--;
            }
        }
        cout<<i+1<<endl;

    }
    return 0;
}



