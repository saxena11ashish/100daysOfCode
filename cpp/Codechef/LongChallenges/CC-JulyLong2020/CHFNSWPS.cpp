#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,n;cin>>t;
    while(t--){
        cin>>n;
        int temp;
        map<int,int> m,a,b;
        for(int i=0;i<n;i++){
            cin>>temp;
            a[temp]++;
            m[temp] >0  ? m.erase(temp) : m[temp]++ ;
        }
        for(int i=0;i<n;i++){
            cin>>temp;
            b[temp]++;
            m[temp] >0  ? m.erase(temp) : m[temp]++ ;
        }
        if(m.size()!=0){
            cout<<-1<<endl;
            continue;
        }
        map<int,int>::iterator itr1=a.begin();
        map<int,int>::iterator itr2=b.begin();

        map<int,int> up;
        map<int,int> down;
        int cost = 0;
        while(itr1!=a.end() && itr2!=b.end()){
            if(itr1->first == itr2->first){
                if(itr1->second < itr2->second)
                    down[itr1->first] = (itr2->second - itr1->second)/2;

                else if(itr1->second > itr2->second)
                    up[itr1->first] =(itr1->second - itr2->second)/2;

                itr1++;itr2++;
            }

            else if(itr1->first < itr2->first){
                up[itr1->first]=(itr1->second)/2;
                itr1++;
            }
            else{
                down[itr2->first]=(itr2->second/2);
                itr2++;
            }
        }
        while(itr1!=a.end()){
            up[itr1->first]=(itr1->second)/2;
            itr1++;
        }
        while(itr2!=b.end()){
            down[itr2->first]=(itr2->second/2);
            itr2++;
        }

        itr1=up.begin();
        map<int,int>::reverse_iterator r_itr2=b.rbegin();
        while(itr1!=up.end() && r_itr2!=down.rend()){
            if(itr1->second == r_itr2->second){
                cost+= (itr1->second * (min (itr1->first,r_itr2->first)));
                itr1++;r_itr2++;
            }

            else if(itr1->second > r_itr2->second){
                cost+= (r_itr2->second * (min (itr1->first,r_itr2->first)));
                itr1->second -= r_itr2->second;
                r_itr2++;
            }
            else{
                cost+= (itr1->second * (min (itr1->first,r_itr2->first)));
                itr1++;
            }
        }

        cout<<cost<<endl;
    }
    return 0;
}


