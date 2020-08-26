#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,x;cin>>t;
    while(t--){
        string s;
        cin.ignore();
        cin>>s;
        cin>>x;
        int n = s.size();
        char ans[n];
        for(int i=0;i<n;i++)ans[i]='A';
        bool possible=true;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                if(i+x<n){
                    if(ans[i+x]=='1'){
                        possible=false;
                        break;
                    }
                    else
                        ans[i+x]='0';
                }
                if(i-x>=0){
                    if(ans[i-x]=='1'){
                        possible=false;
                        break;
                    }
                    else
                        ans[i-x]='0';
                }
            }
            else{
                if(i+x<n){
                    if(ans[i+x]=='0'){
                        possible=false;
                        break;
                    }
                    else
                        ans[i+x]='1';
                }
                if(i-x>=0){
                    if(ans[i-x]=='0'){
                        possible=false;
                        break;
                    }
                    else
                        ans[i-x]='1';
                }
            }
        }
        if(possible)
            for(char &c:ans)cout<<c;
        else
            cout<<"-1";
        cout<<endl;
    }
    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,x;cin>>t;
    while(t--){
        string s;
        cin>>s;
        cin>>x;
        int n = s.size();
        char ans[n];
        bool possible = true;
        for(int i=0;i<n;i++)ans[i]='A';
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                if(i-x>=0){
                    if(ans[i-x]=='1'){
                        possible=false;
                        break;
                    }
                    else{
                        ans[i-x]='0';
                    }
                }
                if(i+x<n){
                    if(ans[i+x]=='1'){
                        possible=false;
                        break;
                    }
                    else{
                        ans[i-x]='0';
                    }
                }
            }
            if(s[i]=='1'){
                if(i-x>=0){
                    if(ans[i-x]=='0'){
                        possible=false;
                        break;
                    }
                    else{
                        ans[i-x]='1';
                    }
                }
                if(i+x<n){
                    if(ans[i+x]=='0'){
                        possible=false;
                        break;
                    }
                    else{
                        ans[i-x]='1';
                    }
                }
            }
        }
        if(possible)
            for(char &c:ans)cout<<c;
        else
            cout<<"-1";
        cout<<endl;
    }
    return 0;
}

*/
