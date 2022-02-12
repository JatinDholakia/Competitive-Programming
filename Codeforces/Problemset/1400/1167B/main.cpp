#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define For(i,x,n) for(int i=x;i<n;i++)
#define pb push_back
#define print(vec) For(i,0,vec.size()) {cout<<vec[i]<<" ";} cout<<'\n';
#define pii pair<int,int>
#define F first
#define S second
#define set(x) cout.precision(x);cout << fixed;
const int mod = 1000000007;
const int INF = 2000000000;

void solve() {
	ll a, b, c;
	cout << "? 1 2\n";
	fflush(stdout);
	cin >> a;
	cout << "? 3 4\n";
	fflush(stdout);
	cin >> b;
	cout << "? 5 6\n";
	fflush(stdout);
	cin >> c;
	set<ll> s{4, 8, 15, 16, 23, 42};
	vector<ll> ans(6, 0);
	for(auto x : s) {
		if(a % x == 0 && s.find(a / x) != s.end()) {
			s.erase(x);
			s.erase(a / x);
			 
		}
	}
	
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		// freopen("output.txt","w",stdout);
	#endif
	int t = 1;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}