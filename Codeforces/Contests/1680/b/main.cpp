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
	int minRow = INT_MAX, minCol = INT_MAX;
	vector< vector<int> > matrix(n, vector<int> (m));
	char cell;
	For(i, 0, n) {
		For(j, 0, m) {
			cin >> cell;
			if (cell == 'R') {
				minRow = min(minRow, i);
				minCol = min(minCol, j);
				matrix[i][j] = 1;
			}
		}
	}
	For(i, 0, n) {
		For(j, 0, m) {
			if (matrix[i][j] && i - minRow <= 0 && j - minCol <= 0) {
				cout << "YES\n";
				return;
			}
		}
	}
	cout << "NO\n";
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