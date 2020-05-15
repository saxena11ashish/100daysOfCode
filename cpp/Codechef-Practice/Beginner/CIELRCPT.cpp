#include<iostream>
using namespace std;
int main() {
    int t,targetSum;cin>>t;
    int prices[12]={1};
    for(int i=1;i<12;i++)
        prices[i]=prices[i-1]*2;
    while(t--){
        int count=0;
        cin>>targetSum;
        for(int i=11;i>=0;  ){
            if(targetSum >= prices[i]){
                count++;
                targetSum-=prices[i];
            }
            else
                i--;
        }
        cout<<count<<endl;
    }
    return 0;
}
