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
	ll k, n, a, b;
	cin >> k >> n >> a >> b;
	if(k <= b * n) {
		cout << -1 << '\n';
		return;
	}
	if(k > a * n) {
		cout << n << '\n';
		return;
	}
	// a * x + b * (n - x) < k
	ll y = k - b * n;
	if(y % (a - b) == 0) {
		cout << y / (a - b) - 1 << '\n';
	} else {
		cout << y / (a - b) << '\n';
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