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
	vector< vector<int> > A(n, vector<int> (m)), B(n, vector<int> (m));
	vector< pair<int, int> > ans;
	For(i, 0, n) {
		For(j, 0, m) {
			cin >> A[i][j];
		}
	}
	For(i, 0, n) {
		For(j, 0, m) {
			if(A[i][j]) {
				if(i && j && A[i-1][j] && A[i][j-1] && A[i-1][j-1]) {
					ans.pb(pair<int, int> (i - 1, j - 1));
				} else if (i && j < m - 1 && A[i-1][j] && A[i][j+1] && A[i-1][j+1]) {
					ans.pb(pair<int, int> (i-1, j));
				} else if (i < n - 1 && j && A[i][j-1] && A[i+1][j] && A[i+1][j-1]) {
					ans.pb(pair<int, int> (i, j-1));
				} else if(i < n - 1 && j < m - 1 && A[i+1][j] && A[i][j+1] && A[i+1][j+1]) {
					ans.pb(pair<int, int> (i, j));
				} else {
					cout << -1;
					return;
				}
			}
		}
	}
	cout << ans.size() << '\n';
	For(i, 0, ans.size()) {
		cout << ans[i].F + 1 << " " << ans[i].S + 1 << '\n';
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