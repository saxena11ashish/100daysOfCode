#include<iostream>
using namespace std;
int main() {
    int t,target,count;cin>>t;
    int notes[]={1,2,5,10,50,100};
    while(t--){
        cin>>target;
        count=0;
        for(int i=5;i>=0;   ){
            if(target >= notes[i]){
                target-=notes[i];
                count++;
            }else i--;
        }
        cout<<count<<endl;
    }

    return 0;
}
