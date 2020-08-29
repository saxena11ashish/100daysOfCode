#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y;

//----------------------------------------------------------------------//

void func(){
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]>=65 && s[i]<=90)
			s[i] = s[i] + 'a' - 'A';
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'){}
		else{
			cout<<"."<<s[i];
		}
	}
	return;
}

//----------------------------------------------------------------------//
int main(){
fastIO
#ifndef ONLINE_JUDGE
	freopen("/home/ashish/CPP/testing/inp.txt","r",stdin);
   	freopen("/home/ashish/CPP/testing/out.txt","w",stdout);
#endif

	int t=1;
	//cin>>t;
	while(t--){
		func();
	}
}