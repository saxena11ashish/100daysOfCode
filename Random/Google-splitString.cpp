//  Given a string s, tell how many substrings should this s be split into, in order to make it a good string.
//  A good string is defined as either a non-increasing or a non-decreasing string.
//
//  Example: I/P -> abcfdeghazx
//           O/P -> 4   (abcf degh az x)

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int t;cin>>t;
    cin.ignore();
    while(t--){
        cin>>s;
        vector<int>v;
        v.push_back(s[0]-97);
        for(int i=1;i<s.size();i++){
            if(s[i]!=s[i-1])
                v.push_back(s[i]-97);
        }
        int slope = (v[1]>v[0] ? 1:-1), ans=1;
        for(int i=1;i<v.size();i++){
            int tempSlope = (v[i]>v[i-1] ? 1:-1);
            if(tempSlope!=slope){
                ans++;
                if(i<v.size()-1)
                    slope = (v[i+1]>v[i] ? 1:-1);
            }
        }
        cout<<ans<<endl;
    }
}
