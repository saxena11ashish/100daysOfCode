#include<bits/stdc++.h>
using namespace std;
int main(){
    int upper=0;
    string s;cin>>s;
    for(char& c: s){
        if(isupper(c))upper++;
    }
    if(upper>=s.size()/2 +1){
        for(char& c: s)
            c=toupper(c);
    }else{
        for(char& c: s)
            c=tolower(c);
    }
    cout<<s;
    return 0;
}
