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
const int mod = 1'000'000'007;

const int64_t INF = 1e17;
inline int64_t mul(int64_t a, int64_t b)
{
	return (INF / a > b ? a * b : INF);
}

inline int64_t add(int64_t a, int64_t b)
{
	return (a + b >= INF ? INF : a + b);
}

void solve() {
int n;
	cin >> n;

	vector<int> a(n);
	for (int &x : a) cin >> x;
	sort(a.begin(), a.end());

	if (n <= 2) {
		cout << a[0] - 1 << endl;
	} else {
		int64_t ans = accumulate(a.begin(), a.end(), 0ll) - n;

		for (int x = 1; ; ++x) {
			int64_t curPow = 1, curCost = 0;
			for (int i = 0; i < n; ++i) {
				curCost = add(curCost, abs(a[i] - curPow));
				curPow = mul(curPow, x);
			}

			if (curPow == INF || curPow / x > ans + a[n - 1]) break;
			ans = min(ans, curCost);
		}

		cout << ans << endl;
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