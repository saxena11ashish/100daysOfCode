#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>a;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        a.push_back(temp);
    }
    for(int i=0;i<a.size(); ){
        if(a[i] + k > 5)
            a.erase(a.begin()+i);
        else i++;
    }
    cout<<a.size()/3;
    return 0;
}
