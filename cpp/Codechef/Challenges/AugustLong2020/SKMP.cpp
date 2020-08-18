#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,p;
    int t;cin>>t;
    cin.ignore();
    while(t--){
        cin>>s>>p;
        string ans = "";
        int a[26]={0};
        bool patternPlaced = false, p0IsSmallest = true;
        for(char &c: s)a[c-97]++;
        for(char &c: p)a[c-97]--;
        for(int i=1;i<p.size();i++){
            if(p[i] < p[0]){
                p0IsSmallest = false;
                break;
            }
        }
        for(int i=0;i<26;i++){
            string temp= string(a[i],char(i+97));  //makes a string with char = i+97 && count = a[i]
            if(!patternPlaced){
                if(p[0]-97 > i)
                    ans+=temp;
                else if(p[0]-97 < i || !p0IsSmallest){
                    ans = ans+ p + temp;
                    patternPlaced = true;
                }
                else{
                    ans = ans + temp + p;
                    patternPlaced = true;
                }
            }
            else
                ans+=temp;
        }
        if(!patternPlaced)
            ans+=p;
        cout<<ans<<endl;
    }
    return 0;
}
