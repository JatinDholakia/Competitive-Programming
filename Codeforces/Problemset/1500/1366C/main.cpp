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
const int INF = 2'000'000'000;

void solve() {
	int n, m;
	cin >> n >> m;
	vector<vector<int> > a(n, vector<int>(m));
	vector<vector<int> > cnt(n + m - 1, vector<int>(2));
    For(i, 0, n){
        For(j, 0, m){
			cin >> a[i][j];
            cnt[i + j][a[i][j]]++;
        }
    }
	int ans = 0;
	for(int i = 0; i <= n + m - 2; i++)
	{
		int j = n + m - 2 - i;
		if(i <= j) continue;
		ans += min(cnt[i][0] + cnt[j][0], cnt[i][1] + cnt[j][1]);
	}
	cout << ans << endl;
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