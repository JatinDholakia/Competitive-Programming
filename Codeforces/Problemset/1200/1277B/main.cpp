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
	vector<int> q(n), ans(n), vis(n+1);
	For(i, 0, n) {
		cin >> q[i];
	}
	ans[0] = q[0];
	vis[q[0]] = 1;
	int idx;
	if(vis[1] == 0)
		idx = 1;
	else
		idx = 2;
	For(i, 0, n) {
		if(i) {
			if(q[i] > q[i - 1]) {
				ans[i] = q[i];
				vis[q[i]] = 1;
			} else {
				while(vis[idx] != 0 && idx < q[i]) {
					idx++;
				}
				if(idx < q[i]) {
					ans[i] = idx;
					vis[idx] = 1;
				} else {
					cout << -1 << '\n';
					return;
				}
			}
		}
	}
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
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}