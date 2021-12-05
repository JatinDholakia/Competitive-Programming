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
	int N, Q;
	cin >> N >> Q;
	set<int> x, y, sum, diff;
	For(i, 0, Q) {
		int a, b;
		cin >> a >> b;
		if(x.find(a) == x.end() && y.find(b) == y.end() && sum.find(a + b) == sum.end() && diff.find(a - b) == diff.end()){
			cout << "YES\n";
			x.insert(a);
			y.insert(b);
			sum.insert(a+b);
			diff.insert(a-b);
		}
		else
			cout << "NO\n";
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