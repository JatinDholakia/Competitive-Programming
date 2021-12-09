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

bool isLucky(int x) {
	string s = to_string(x);
	For(i, 0, s.size()) {
		if(!(s[i] == '4' || s[i] == '7'))
			return false;
	}
	return true;
}

void solve() {
	int n;
	cin >> n;
	for(int i = 1; i < 32; i++) {
		if(n % i == 0 && (isLucky(i) || isLucky(n / i))) {
			cout << "YES";
			return;
		}
	}	
	cout << "NO";
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