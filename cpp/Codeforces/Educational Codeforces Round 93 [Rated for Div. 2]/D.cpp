// DOESN'T work for
//  4 1 3
//  9 9 9 9
//  9
//  9


#include<bits/stdc++.h>
using namespace std;
int main(){
    int red,green,blue;
    cin>>red>>green>>blue;
    vector<int> r(red),g(green),b(blue);
    for(int i=0;i<red;i++)cin>>r[i];
    for(int i=0;i<green;i++)cin>>g[i];
    for(int i=0;i<blue;i++)cin>>b[i];
//    cout<<r.size()<<g.size()<<b.size()<<endl;
    sort(r.begin(),r.end());
    sort(g.begin(),g.end());
    sort(b.begin(),b.end());
    long long ans = 0;
    int x=0;
    red--;green--;blue--;
    while(r.size()>0 && g.size()>0 && b.size()>0){
        int minElement = min(r.back(),min(g.back(),b.back()));
        if(r.back() == minElement){
            ans += (g.back()*b.back());
            g.pop_back();
            b.pop_back();
        }
        else if(g.back() == minElement){
            ans += (r.back()*b.back());
            r.pop_back();
            b.pop_back();
        }
        else{
            ans += (r.back()*g.back());
            r.pop_back();
            g.pop_back();
        }
    }
    while(g.size()>0 && b.size()>0){
        ans += (g.back()*b.back());
        g.pop_back();
        b.pop_back();
    }
    while(r.size()>0 && b.size()>0){
        ans += (r.back()*b.back());
        r.pop_back();
        b.pop_back();
    }
    while(r.size()>0 && g.size()>0){
        ans += (r.back()*g.back());
        r.pop_back();
        g.pop_back();
    }
    cout<<ans;
    return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int red,green,blue;
    cin>>red>>green>>blue;
    vector<int> r(red),g(green),b(blue);
    for(int i=0;i<red;i++)cin>>r[i];
    for(int i=0;i<green;i++)cin>>g[i];
    for(int i=0;i<blue;i++)cin>>b[i];
//    cout<<r.size()<<g.size()<<b.size()<<endl;
    sort(r.begin(),r.end());
    sort(g.begin(),g.end());
    sort(b.begin(),b.end());
    long long ans = 0;
    int x=0;
    red--;green--;blue--;
    while(1){
        if(red==-1)x--;
        if(green==-1)x--;
        if(blue==-1)x--;
        if(x<=-2)break;
        int minElement = min(r[red],min (g[green], b[blue]));
        if(r[red] == minElement){
            ans += (g[green]*b[blue]);
            green--;blue--;
        }
        else if(g[green] == minElement){
            ans+= (b[blue]*r[red]);
            blue--;red--;
        }
        else{
            ans+= (r[red]*g[green]);
            red--;green--;
        }
    }
    cout<<ans;
    return 0;
}
*/
