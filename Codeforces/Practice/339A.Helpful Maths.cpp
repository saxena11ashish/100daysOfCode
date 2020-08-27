#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int a[4]={0};
    for(int i=0;i<s.size();i+=2){
        switch(s[i]){
            case '1':a[1]++;break;
            case '2':a[2]++;break;
            case '3':a[3]++;break;
        }
    }
    int plus=accumulate(a,a+4,0);
    plus--;
    int i=1;
    while(i<=3){
        while(a[i]>0){
            cout<<i;
            a[i]--;
            if(plus>0){
                cout<<"+";plus--;
            }

        }
        i++;
    }

    return 0;
}
