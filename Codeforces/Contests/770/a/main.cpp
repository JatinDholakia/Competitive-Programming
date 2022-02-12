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

bool isPalindrome(string s) {
	int i = 0, j = s.size() - 1;
	while(i < s.size()) {
		if(s[i] != s[j])
			return false;
		i++;
		j--;
	}
	return true;
}

void solve() {
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	if(k == 0) {
		cout << 1 << '\n';
		return;
	}
	if(isPalindrome(s)) {
		cout << 1 << '\n';
	} else {
		cout << 2 << '\n';
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