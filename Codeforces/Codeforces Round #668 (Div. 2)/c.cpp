#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x<<endl;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y<<endl;
#define deba(a)		 cout<<"\n"<<#a<<" : ";for(int i:a)cout<<i<<" ";cout<<endl;

//----------------------------------------------------------------------//

void func(){
	string s;
	int n,k;
	cin>>n>>k;
	cin.ignore();
	cin>>s;
	int enforcedVal = 0, enforcedValCount=0;
	int zeroes=0,ones=0,ques=0;
	for(int j=0;j<k;j++){
		if(s[j]=='0')
			zeroes++;
		else if(s[j]=='1')
			ones++;
		else
			ques++;
	}
	for(int i=0;i+k<=n;i++){	
		if(i!=0){
			if(s[i-1]=='?'){
				ques--;
				enforcedValCount--;
			}
			else if(s[i-1]=='1'){
				ones--;
				if(enforcedVal==1)
					enforcedValCount--;
			}
			else{
				zeroes--;
				if(enforcedVal==0)
					enforcedValCount--;
			}
			
		}

		if(zeroes > k/2 || ones>k/2 ||(abs(zeroes-ones) != ques)){
			cout<<"NO\n";
			return;
		}
		if(ques && abs(zeroes-ones)*2 > ques){
			enforcedVal = (zeroes>ones ? 0 : 1);
			enforcedValCount = zeroes-ones;
		}
	}
	cout<<"YES\n";
	return;
}

//----------------------------------------------------------------------//
int main(){
fastIO
#ifndef ONLINE_JUDGE
	freopen("/home/ashish/CPP/inp.txt","r",stdin);
   	freopen("/home/ashish/CPP/out.txt","w",stdout);
#endif

	int t=1;
	cin>>t;
	while(t--){
		func();
		cout<<t;
	}
}