#include <bits/stdc++.h>

using namespace std;

#define lli             long long int
#define fastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define deb(x)		 cout<<"\n"<<#x<<" = "<<x<<endl;
#define deb2(x,y)	 cout<<"\n"<<#x<<" = "<<x<<" | "<<#y<<" = "<<y<<endl;
#define deba(a)		 for(int i:a)cout<<i<<" ";cout<<endl;

//----------------------------------------------------------------------//

void func() {
	lli a, b, x, y, n;
	cin >> a >> b >> x >> y >> n;
	while (n--) {
		if (a > x && a * (b - 1) >= (a - 1)*b)
			a--;
		else if (b > y && a * (b - 1) < (a - 1)*b)
			b--;
		else
			break;
	}
	cout << a*b << endl;

}

//----------------------------------------------------------------------//
int main() {
	fastIO
#ifndef ONLINE_JUDGE
	freopen("/home/ashish/CPP/inp.txt", "r", stdin);
	freopen("/home/ashish/CPP/out.txt", "w", stdout);
#endif

	int t = 1;
	cin >> t;
	while (t--) {
		func();
	}
}