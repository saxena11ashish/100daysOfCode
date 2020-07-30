#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b,gibberish;
    cin>>a>>b>>gibberish;
    int alpha[26]={0};
    for(char&c:a)alpha[c-65]++;
    for(char&c:b)alpha[c-65]++;
    for(char&c:gibberish)alpha[c-65]--;
    bool flag = true;
    for(int i=0;i<26;i++){
        if(alpha[i]!=0){
            flag=false;
            break;
        }
    }
    if(flag)cout<<"YES";
    else cout<<"NO";
    return 0;
}
