#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define print(vec) For(i,0,vec.size()) {cout<<vec[i]<<" ";} cout<<'\n';
#define set(x) cout.precision(x);cout << fixed;
const int mod = 1000000007;
const int INF = 2000000000;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	char middle = s[(n-1)/2];
	int count = 0;
	for (int i = (n-1)/2; i >= 0; i--) {
		if (s[i] == middle)
			count++;
		else
			break;
	}
	int ans =  (n % 2) ? (count * 2 - 1) : count * 2;
	cout << ans << '\n';
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
	#endif
	int t = 1;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}