#include<iostream>
using namespace std;
int main() {
    int t,B;cin>>t;
    while(t--){
        cin>>B;
        B=B/2 -1;
        int no_of_triangles=0;
        while(B>0){
            no_of_triangles+=B;
            B--;
        }
        cout<<no_of_triangles<<endl;
    }
    return 0;
}
