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
	ll n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	set<char> c;
	For(i, 0, k) {
		char tmp;
		cin >> tmp;
		c.insert(tmp);
	}
	int left = -1;
	ll total = n * (n+1) / 2;
	For(i, 0, n) {
		if(c.find(s[i]) == c.end()) {
			total -= (i - left) * (n - i);
			left = i;
		}
	}
	cout << total;
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