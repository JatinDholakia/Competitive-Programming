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
	vector<int> a(n);
	int ans = 0;
	For(i, 0, n) {
		cin >> a[i];
		if(i && (a[i] + a[i-1] == 3)) {
			ans += 3;
		} else if(i && (a[i] + a[i-1] == 4)) {
			ans += 4;
		} else if (i && (a[i] + a[i-1] == 5)) {
			cout << "Infinite";
			return;
		}
	}
	For(i, 2, n) {
		if(a[i - 2] == 3 && a[i - 1] == 1 && a[i] == 2) {
			ans--;
		}
	}
	cout << "Finite\n" << ans;
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