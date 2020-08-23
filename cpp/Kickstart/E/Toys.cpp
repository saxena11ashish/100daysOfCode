#include<bits/stdc++.h>
using namespace std;
class toy{
public:
    int e,r;
    toy(int a,int b){
        e=a;
        r=b;
    }
};
int main(){
    int tt=1;cin>>tt;
    for(int t=1;t<=tt;t++){
        int n,e,r;cin>>n;
        vector<toy>v;
        for(int i=0;i<n;i++){
            cin>>e>>r;
            v.push_back(toy(e,r));
        }       // I/P complete
        vector<toy>a=v;
        bool indefinitely = true;
        long long int sum=0,x,z;
        for(toy i: v)
            sum+=i.e;
        //cout<<sum;
        x=sum;
        z=sum;
        int toysRemoved=0;
        for(int i=0;i<v.size() && v.size()>1;i++){
            if(sum - v[i].e < v[i].r){
                sum-=v[i].e;
                v.erase(v.begin()+i);
                i=0;
                toysRemoved++;
            }
        }
        if(v.size()==1)
            indefinitely = false;
        if(indefinitely)
            cout<<"Case #"<<t<<": "<<toysRemoved<<" INDEFINITELY\n";
        else{
            toysRemoved=0;
            int i=0;
            while(z-a[i].e >= a[i].r){
                x+=a[i].e;
                i++;
            }
            cout<<"Case #"<<t<<": "<<toysRemoved<<" "<<x<<endl;
        }
    }
    return 0;
}
