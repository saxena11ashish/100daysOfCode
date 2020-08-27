#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,n,x,y;cin>>t;
    while(t--){
        cin>>n;
        n = (4*n)-1;
        unordered_map<int,int> mapX;
        unordered_map<int,int> mapY;
        while(n--){
            cin>>x>>y;
            mapX[x] > 0 ? mapX.erase(x) : mapX[x]++;
            mapY[y] > 0 ? mapY.erase(y) : mapY[y]++;
        }
        unordered_map<int,int> :: iterator itr=mapX.begin();
        cout<<itr->first<<" ";
        itr=mapY.begin();
        cout<<itr->first<<"\n";
    }
    return 0;
}


/*#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,n,x,y;cin>>t;
    while(t--){
        cin>>n;
        n = (4*n)-1;
        map<int,int> mapX;
        map<int,int> mapY;
        while(n--){
            cin>>x>>y;
            mapX[x]++;
            mapY[y]++;
        }

        map<int,int> :: iterator  itr;
        for(itr=mapX.begin();itr!=mapX.end();itr++){
            if(itr->second%2!=0){
                cout<<itr->first<<" ";
                break;
            }
        }
        for(itr=mapY.begin();itr!=mapY.end();itr++){
            if(itr->second%2!=0){
                cout<<itr->first<<"\n";
                break;
            }
        }

    }
    return 0;
}
*/

