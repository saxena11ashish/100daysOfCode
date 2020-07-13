// TRICKY -- V.V.Imp
#include<iostream>
using namespace std;

int factorial(int n){
    int no_of_digit=1, ans[200];
    ans[0]=1;
    while(n>1){
        int carry=0,temp;
        for(int i=0;i<no_of_digit;i++){
            temp = n*ans[i]+carry;
            ans[i]=temp%10;
            carry=temp/10;
        }
        while(carry>0){
            ans[no_of_digit]=carry%10;
            carry/=10;
            no_of_digit++;
        }
        n--;
    }
    for(int i=no_of_digit-1;i>=0;i--)   cout<<ans[i];
    cout<<endl;
}

int main() {
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        factorial(n);
    }
    return 0;
}
