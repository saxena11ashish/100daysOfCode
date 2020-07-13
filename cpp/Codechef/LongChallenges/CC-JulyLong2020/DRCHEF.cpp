#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,N;cin>>t;
    int drugsAvailable;
    while(t--){
        int days=0;
        cin>>N>>drugsAvailable;
        int population[N];
//        map<int,int> population;
//        int temp;
        for(int i=0;i<N;i++){
            cin>>population[i];
            //population[temp]++;
        }
//        map<int,int>::iterator itr = population.begin();
        sort(population,population+N);
        int copy[N];for(int i=0;i<N;i++) copy[i] = population[i];
        int i=0;
        while(drugsAvailable>population[i] && i<N){
            days++;
            i++;
        }
        while(i<N){
            if(drugsAvailable == population[i]){
                days++;
                drugsAvailable*=2;
                i++;
            }
            else if(drugsAvailable > population[i]){
                days++;
                drugsAvailable = 2* population[i];
                i++;
            }
            else{
                days++;
                population[i] = min(copy[i], 2*(population[i] - drugsAvailable));
                drugsAvailable*=2;
            }
        }
        cout<<days<<endl;
    }
    return 0;
}





/*
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,N;cin>>t;
    long long drugsAvailable;
    while(t--){
        int days=0;
        cin>>N>>drugsAvailable;
        map<int,int> population;
        int temp;
        for(int i=0;i<N;i++){
            cin>>temp;
            population[temp]++;
        }
        map<int,int>::iterator itr = population.begin();
        while(itr!=population.end()){
            if(itr->first <= drugsAvailable){
                if(itr->second==1)
                    ++itr;
                else
                    itr->second-=1;
            }
            days++;
            drugsAvailable*=2;
        }
        cout<<days<<endl;
    }
    return 0;
}


*/
