#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x<<endl;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y<<endl;
#define deba(a)		 cout<<"\n"<<#a<<" : ";for(int i:a)cout<<i<<" ";cout<<endl;

//----------------------------------------------------------------------//

void func(){
	int n;cin>>n;
	if(n<1)
		n+=7;
	else if(n>7)
		n%=7;
	switch(n){
		case 7:
		case 1:cout<<83<<endl;break;
		case 6:
		case 2:cout<<83<<" "<<83<<endl;break;
		case 5:
		case 3:cout<<83<<" "<<83<<" "<<69<<endl;break;
		case 4:cout<<83<<" "<<83<<" "<<69<<" "<<67<<endl;break;
	}
}

//----------------------------------------------------------------------//
int main(){
fastIO
#ifndef ONLINE_JUDGE
	freopen("/home/ashish/CPP/inp.txt","r",stdin);
   	freopen("/home/ashish/CPP/out.txt","w",stdout);
#endif

	int t='E';
	cout<<t;
	cin>>t;
	while(t>0){
		func();
		t--;
	}
}