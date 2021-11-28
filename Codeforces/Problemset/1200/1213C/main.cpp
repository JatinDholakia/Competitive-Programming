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
	ll n, m;
	cin >> n >> m;
	vector<ll> lastDigits(11);
	For(i, 1, 11) {
		lastDigits[i] = (m * i) % 10;
	}
	ll maxMultiplier = n / m;
	ll multiplier = maxMultiplier / 10;
	ll sum = 0;
	For(i, 1, 11) {
		sum += lastDigits[i] * multiplier;
	}
	For(i, 1, maxMultiplier % 10 + 1) {
		sum += lastDigits[i];
	}
	cout << sum << '\n';
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