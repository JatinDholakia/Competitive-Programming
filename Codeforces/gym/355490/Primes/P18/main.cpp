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
	vector<int> h(n);
	For(i, 0, n) {
		cin >> h[i];
	}
	int ans = 0;
	set<int> factors;
	for(int i = 1; i * i <= n; i++) {
		if(n % i == 0) {
			factors.insert(n / i);
			factors.insert(i);
		}
	}
	for(int x : factors) {
		int size1 = n / x;
		bool peak1 = false;
		bool valid1 = true;
		for(int j = 0; j < n; j++) {
			if(j && j < n - 1 && h[j] > h[j - 1] && h[j] > h[j + 1])
				peak1 = true;
			if((j + 1) % size1 == 0 && !peak1){
				valid1 = false;
				break;
			} else if((j + 1) % size1 == 0 && peak1) {
				peak1 = false;
			}
		}
		if(valid1) {
			ans = max(ans, n / size1);
		}
	}
	cout << ans;
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