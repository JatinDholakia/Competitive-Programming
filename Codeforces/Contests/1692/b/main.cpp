#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define print(vec) For(i,0,vec.size()) {cout<<vec[i]<<" ";} cout<<'\n';
#define set(x) cout.precision(x);cout << fixed;
const int mod = 1000000007;
const int INF = 2000000000;

void solve() {
	int n;
	cin >> n;
	set<int> a;
	int x;
	for(int i = 0; i < n; i++) {
		cin >> x;
		a.insert(x);
	}
	int ans = a.size();
	if ((n - a.size()) % 2) ans = ans - 1;
	cout << ans << '\n';
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
	#endif
	int t = 1;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}