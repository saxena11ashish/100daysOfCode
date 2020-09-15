#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x<<endl;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y<<endl;
#define deba(a)		 cout<<"\n"<<#a<<" : ";for(auto i:a)cout<<i<<" ";cout<<endl;

//----------------------------------------------------------------------//
bool comp(string a,string b){
	string d1,m1,y1,d2,m2,y2;
	vector<int>v;
	for(int i=0;i<a.size();i++){
		if(a[i]=='/')
			v.push_back(i);
	}
	d1=a.substr(0,v[0]);
	m1=a.substr(v[0]+1,v[1]-(v[0]+1));
	y1=a.substr(v[1]+1);
	// deb2(d1,m1);
	// deb(y1);
	v.clear();
	for(int i=0;i<b.size();i++){
		if(b[i]=='/')
			v.push_back(i);
	}
	d2=b.substr(0,v[0]);
	m2=b.substr(v[0]+1,v[1]-(v[0]+1));
	y2=b.substr(v[1]+1);
	if(y1 != y2)
		return y1 < y2;
	if(m1 != m2)
		return m1 < m2;
	return d1 < d2;
}
void func(){
	int n;cin>>n;
	cin.ignore();
	vector<string> v;
	while(n--){
		string s;
		cin>>s;
		// comp(s,s);
		v.push_back(s);
	}
	sort(v.begin(),v.end(),comp);
	// deba(v);
	for(auto i: v)
		cout<<i<<endl;
}

//----------------------------------------------------------------------//
int main(){
fastIO
#ifndef ONLINE_JUDGE
	freopen("/home/ashish/CPP/inp.txt","r",stdin);
   	freopen("/home/ashish/CPP/out.txt","w",stdout);
#endif

	int t=1;
	// cin>>t;
	while(t--){
		func();
	}
}