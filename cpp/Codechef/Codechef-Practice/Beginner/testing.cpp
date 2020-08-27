












#include<bits/stdc++.h>
using namespace std;
int main() {
    map<int,int> m,a,b;
    map<int,int>::reverse_iterator it1=a.rbegin();
    a.insert({0,1});
    a.insert({40,1});
    a.insert({4,1});
    a.insert({3,1});
    a.insert({2,1});
//    m.insert(<int>(2));
    while(it1!=a.rend()){
        cout<<it1->first<<" ";
        it1++;
    }
    return 0;
}

/*

#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,N;cin>>t;
    while(t--){
        int days=0;
        long long drugsAvailable;
        cin>>N>>drugsAvailable;
        int population[N];
        for(int i=0;i<N;i++)cin>>population[i];

        if(accumulate(population,population+N,0)/N == population[0]){
            days=N;
            while(drugsAvailable<population[0]){
                days++;
                drugsAvailable*=2;
            }
            cout<<days<<endl;
        continue;
        }
        sort(population,population+N);
        int l=0;
        while(l<N){
            if(population[l] <= drugsAvailable)//{
                //population[l]=0;
                l++;
            //}
            days++;
            drugsAvailable*=2;
        }
        cout<<days<<endl;
    }
    return 0;
}
*/
