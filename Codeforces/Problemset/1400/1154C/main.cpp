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
	ll a, b, c;
	cin >> a >> b >> c;
	int dayFood[] = {1, 2, 3, 1, 3, 2, 1};
	ll weeks = min(a / 3, min(b / 2, c / 2));
	ll ans = 0;
	a -= weeks * 3;
	b -= weeks * 2;
	c -= weeks * 2;
	For(i, 0, 7) {
		ll curr = weeks * 7;
		ll tempA = a;
		ll tempB = b;
		ll tempC = c;
		For(j, i, i + 7) {
			if(dayFood[j % 7] == 1 && tempA) {
				tempA--;
				curr++;
			} else if(dayFood[j % 7] == 2 && tempB) {
				tempB--;
				curr++;
			} else if(dayFood[j % 7] == 3 && tempC) {
				tempC--;
				curr++;
			} else {
				break;
			}
		}
		ans = max(ans, curr);
	}
	cout << ans << '\n';
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