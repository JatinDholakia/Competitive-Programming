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
	int one = 0, two = 0, three = 0;
	string s;
	cin >> s;
	for(int i = 0; i < s.size(); i += 2) {
		if(s[i] == '1') one++;
		else if(s[i] == '2') two++;
		else three++;
	}
	for(int i = 0; i < s.size(); i += 2) {
		if(one > 0) {
			s[i] = '1';
			one--;
		} else if(two > 0) {
			s[i] = '2';
			two--;
		} else if(three > 0) {
			s[i] = '3';
			three--;
		}
	}	
	cout << s;
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