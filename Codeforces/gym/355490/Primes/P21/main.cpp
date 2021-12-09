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
	int n;
	cin >> n;
	vector<bool> isPrime(n + 1, true);
	vector<int> ans;
	isPrime[0] = isPrime[1] = false;
	for(int i = 2; i <= n; i++) {
		if(isPrime[i]) {
			ans.pb(i);
			for(int j = 0; j <= n; j += i) {
				isPrime[j] = false;
			}
		}
	}
	cout << ans.size() << '\n';
	print(ans);
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