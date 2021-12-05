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
	string s;
	cin >> s;
	int i = 0, j = 0, n = s.size(), maxDiff = 0;
	while(i < n) {
		if(s[i] == s[j]) {
			i++;
		} else {
			maxDiff = max(maxDiff, i  - j);
			j = i;
			// deb(maxDiff);
		}
	}
	maxDiff = max(maxDiff, i - j + 1);
	// deb(maxDiff);
	cout << (maxDiff >= 7 ? "YES" : "NO") << '\n'; 	
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