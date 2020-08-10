#include<bits/stdc++.h>
using namespace std;
int main(){
    //string asa = string(5,'i');   //repeat character n times
    int i=0;
    string temp= string(3,char(i+97));
    cout<<temp;
    string s,p;
    int t;cin>>t;
    cin.ignore();
    while(t--){
        cin>>s>>p;
        string stringArray[26];
        bool patternPlaced = false;
        for(char &c: s)stringArray[c-97]+=c;
        for(char &c: p)stringArray[c-97].pop_back();
        string ans="";
        for(int i=0;i<26;i++){
            if(!patternPlaced){
                if(stringArray[i][0]==p[0]){
                    if(stringArray[i].size() >= p.size()){
                        ans+=p;
                        ans+=stringArray[i];
                        patternPlaced = true;
                    }
                    else{
                        bool patternFirst=true;
                        for(int ii=1;ii<=stringArray[i].size();ii++){
                            if(p[ii]==stringArray[i][0]){}
                            else if(p[ii]<stringArray[i][0]){
                                break;
                            }
                            else{
                                patternFirst = false;
                                break;
                            }
                        }
                        if(patternFirst)
                            ans = ans+p+stringArray[i];
                        else
                            ans = ans+stringArray[i]+p;
                        patternPlaced = true;
                    }
                }
                else if(stringArray[i] < p)
                    ans+=stringArray[i];
                else{
                    patternPlaced = true;
                    ans+=p;
                    ans+=stringArray[i];
                }
            }
            else
                ans+=stringArray[i];
        }
        if(!patternPlaced)ans+=p;
        cout<<ans<<endl;
    }
    return 0;
}

