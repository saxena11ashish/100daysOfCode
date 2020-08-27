#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int n,count=0;cin>>n;
    cin.ignore();
    cin>>s;
    for(char& c:s){
        if(c=='A')count++;
        else if(c=='D')count--;
    }
    if(count==0)cout<<"Friendship";
    else if(count>0)cout<<"Anton";
    else cout<<"Danik";
    return 0;
}
