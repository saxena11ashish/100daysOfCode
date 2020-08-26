#include<iostream>
using namespace std;
int main(){
    int t,n,x,y;cin>>t;
    while(t--){
        string s;
        cin>>s;
        int alpha[26]={0};
        for(int i=0;i<s.size();i++){
            alpha[s[i]-97]++;
        }
        int index=0;
        for(int i=1;i<26;i++){
            if(alpha[i]>alpha[index])
                index=i;
        }
        cout<<alpha[index]<<" "<<char(index+97)<<endl;
    }
    return 0;
}

