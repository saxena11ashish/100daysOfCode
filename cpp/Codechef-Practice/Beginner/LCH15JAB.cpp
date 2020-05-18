#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count[26]={0};
        for(int i=0;i<s.size();i++){
            count[s[i]-97]++;
        }
        int temp = *max_element(count,count+26);
        int arraySum = accumulate(count,count+26,0);
        cout<<( arraySum - 2*temp == 0 ? "YES":"NO")<<endl;
    }
    return 0;
}
