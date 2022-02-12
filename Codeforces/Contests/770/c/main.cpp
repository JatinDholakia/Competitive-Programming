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
	int n, k;
	cin >> n >> k;
	int total = n * k;
	if(k == 1) {
		cout << "YES\n";
		For(i, 1, total + 1) {
			cout << i << '\n';
		}
	} else if (n % 2) {
		cout << "NO\n";
	} else {
		cout << "YES\n";
		int curr = 1;
		for(int i = 0; i < n / 2; i++) {
			for(int j = 0; j < k; j++) {
				cout << curr << " ";
				curr += 2;
			}
			cout << '\n';
		}
		curr = 2;
		for(int i = 0; i < n / 2; i++) {
			for(int j = 0; j < k; j++) {
				cout << curr << " ";
				curr += 2;
			}
			cout << '\n';
		}
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
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}