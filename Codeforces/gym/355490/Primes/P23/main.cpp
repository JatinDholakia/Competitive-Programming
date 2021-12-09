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

bool isTPrime(ll x) {
	if (x <= 1) return false;
	int count = 0;
    for (ll d = 2; d * d <= x; d++) {
        if (x % d == 0) {
			count++;
			if(d != x / d)
				count++;
		}
    }
}

void solve() {
	int n;
	cin >> n;
	For(i, 0, n) {
		ll x;
		cin >> x;
		cout << (isTPrime(x) ? "YES" : "NO") << '\n';
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
	// cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}