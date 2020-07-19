#include<bits/stdc++.h>
using namespace std;

int power(int x){
    int temp = 0;
    while(x>0){
        temp = temp+ (x%10);
        x/=10;
    }
    return temp;
}
int main(){
    int t,n;cin>>t;
    while(t--){
        cin>>n;
        int chefScore,mortyScore,chefWins=0,mortyWins=0;
        while(n--){
            cin>>chefScore>>mortyScore;
            int temp = power(chefScore)- power(mortyScore);
            if(temp>0)chefWins++;
            else if (temp<0)mortyWins++;
            else{
                chefWins++;
                mortyWins++;
            }
        }
        if(chefWins > mortyWins)
            cout<<0<<" "<<chefWins;
        else if(chefWins < mortyWins)
            cout<<1<<" "<<mortyWins;
        else
            cout<<2<<" "<<chefWins;
        cout<<endl;
    }
    return 0;
}
