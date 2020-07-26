#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int t,n;cin>>t;
    for(int test=1;test<=t;test++){
        cin>>n;
        cin.ignore();
        cin>>s;
        bool flag=true;
        int temp=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A')temp++;
            else temp--;
        }
        if(temp>=3 || temp<=-3)
            flag=false;
        cout<<"Case #"<<test<<": "<<(flag? "Y":"N")<<endl;
    }
    return 0;
}
