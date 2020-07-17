#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,N;cin>>t;
    int drugsAvailable;
    while(t--){
        int days=0;
        cin>>N>>drugsAvailable;
        int population[N];
        for(int i=0;i<N;i++)
            cin>>population[i];
        sort(population,population+N);
        int i=0,notCured=N;
        while(i<N){
            if(population[i] >= drugsAvailable){
                if(population[i] == drugsAvailable){
                    notCured--;
                    i++;
                }
                drugsAvailable*=2;
                days++;
            }
            else if(2*population[i] >= drugsAvailable){    //drugs should not reduce in number until we reach end of population array
                notCured--;
                drugsAvailable = 2*population[i] ;
                days++;
                i++;
            }
            else
                i++;
        }
        cout<<days+notCured<<endl;
    }
    return 0;
}
