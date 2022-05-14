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
	int n, m;
	cin >> n >> m;
	vector<vector<int> > a(n, vector<int> (m)), b(n, vector<int> (m)), c(n, vector<int> (m)), d(n, vector<int> (m));
	For(i, 0, n) {
		For(j, 0, m) {
			cin >> a[i][j];
		}
	}
	For(i, 0, n) {
		For(j, 0, m) {
			cin >> b[i][j];
			c[i][j] = min(a[i][j], b[i][j]);
			d[i][j] = max(a[i][j], b[i][j]);
			if(i && (c[i][j] <= c[i-1][j] || d[i][j] <= d[i-1][j])) {
				cout << "Impossible\n";
				return;
			}
			if(j && (c[i][j] <= c[i][j-1] || d[i][j] <= d[i][j-1])) {
				cout << "Impossible\n";
				return;
			}
		}
	}
	cout << "Possible\n";

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