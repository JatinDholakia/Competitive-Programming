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
	For(i, 0, n) {
		cin >> a[i];
	}
	vector<int> b = a;
	sort(b.begin(), b.end());
	int l = -1, r = n;
	while(l + 1 < n && a[l + 1] == b[l + 1]) ++l;
	while(r - 1 >= 0 && a[r - 1] == b[r - 1]) --r;
	For(i, l + 1, r) {
		if(a[i] != b[r - (i - l)]) {
			cout << "no";
			return;
		}
	}
	cout << "yes\n";
	if(l >= r) cout << "1 1";
	else cout << l + 2 << " " << r;
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