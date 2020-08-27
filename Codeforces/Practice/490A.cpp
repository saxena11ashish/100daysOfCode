#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

        cin>>n;
        int temp;
        stack<int>s1,s2,s3;
        for(int i=1;i<=n;i++){
            cin>>temp;
            if(temp==1)s1.push(i);
            else if(temp==2)s2.push(i);
            else s3.push(i);
        }
        cout<<min(s1.size(),min(s2.size(),s3.size()))<<endl;
        while(!s1.empty() &&!s2.empty() &&!s3.empty()){
            cout<<s1.top()<<" "<<s2.top()<<" "<<s3.top()<<endl;
            s1.pop();s2.pop();s3.pop();
        }

    return 0;
}
