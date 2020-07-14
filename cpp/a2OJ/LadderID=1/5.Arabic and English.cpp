#include<iostream>              // ### ab ##
using namespace std;
int main(){
    int t,n;cin>>t;
    while(t--){
        cin>>n;
        string s;
        cin.ignore();
        getline(cin,s);
        int l=-1;
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i])){
                l=i;
                break;
            }
        }
        if(l==-1){
            cout<<s<<endl;
        }else{
            for(int i=l;i<s.size();i++)
        }

    }
    return 0;
}


