//2n max operations -- O(n^2)time
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;cin>>t;
    string a,b;
    while(t--){
        cin>>n;
        cin.ignore();
        cin>>a>>b;
        vector<int>v;
        for(int i=n-1;i>=0;i--){
            if(b[i]!=a[i]){
                if(b[i]==a[0]){
                    v.push_back(1);
                    a[0]=(a[0]=='0'? '1':'0');
                }

                v.push_back(i+1);
                for(int j=0;j<=i;j++){
                    a[j]=((a[j]=='0')? '1':'0');
                }
                reverse(a.begin(),a.begin()+i+1);
            }
        }
        cout<<v.size();
        for(int i:v)cout<<" "<<i;
        cout<<endl;
    }
    return 0;
}
/*3n operations -- O(n)time
#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    int t,n;cin>>t;
    while(t--){
        cin>>n;
        cin.ignore();
        cin>>a>>b;
        vector<int>v;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                if(i>0)v.push_back(i+1);
                v.push_back(1);
                if(i>0)v.push_back(i+1);
            }
        }
        cout<<v.size();
        for(int a:v)cout<<" "<<a;
        cout<<endl;
    }
    return 0;
}
*/
