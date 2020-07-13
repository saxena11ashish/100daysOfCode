#include<iostream>              // ### ab ##
using namespace std;
int main(){
    int t,n;cin>>t;
    while(t--){
        cin>>n;
        string s;
        cin.ignore();
        getline(cin,s);

        int start=0,end=s.size()-1,l=-1,r=-1;
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i])){
                l=i;
                while(isalpha(s[i]) && i<s.size())
                    i++;
                r=i-1;
                break;
            }
        }
        if(l==-1){
            cout<<s<<endl;
        }
        else{
            for(int i=r+2;i<s.size();i++)
                cout<<s[i];
            cout<<" ";
            for(int i=l;i<=r;i++)
                cout<<s[i];
            cout<<" ";
            for(int i=0;i<l-1;i++)
                cout<<s[i];
            cout<<endl;
        }
    }
    return 0;
}


