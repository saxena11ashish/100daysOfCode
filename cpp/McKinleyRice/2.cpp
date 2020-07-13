#include<iostream>
using namespace std;
void numberSorter(int n){
    int digitCount[10]={0};
    while(n>0){
        int index=n%10;
        digitCount[index]++;
        n/=10;
    }
    int number=0;
    for(int i=9;i>=0;i--){
        while(digitCount[i]>0){
            number = number*10 + i;
            digitCount[i]--;
        }
    }
    cout<<number<<endl;
}

int main() {
    numberSorter(1128239);
    return 0;
}

