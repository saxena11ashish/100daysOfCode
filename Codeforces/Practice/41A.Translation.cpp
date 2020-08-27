#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    for(int i=0,j=s.size()-1;i<j;i++,j--){
        char temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
    if(s==t)cout<<"YES";
    else cout<<"NO";
    return 0;
}
