#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while(t--){
        int m,x,y;
        cin>>m>>x>>y;
        int a[m];
        for(int i=0;i<m;i++)cin>>a[i];
        sort(a,a+m);
        int houses_to_check=x*y,left_flag=0,right_flag=0,safehouses=0;
        for(int i=0;i<m;i++){
            left_flag=a[i]-houses_to_check;
            safehouses+=max(0,left_flag-right_flag-1);
            right_flag=a[i]+houses_to_check;
        }
        safehouses+=max(0,100-right_flag);
        cout<<safehouses<<endl;
    }
    return 0;
}
