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
    int n;
		string s;
		cin >> n >> s;
		vector<int> ans(n);
		vector<int> pos0, pos1;
		for (int i = 0; i < n; ++i) {
			int newpos = pos0.size() + pos1.size();
			if (s[i] == '0') {
				if (pos1.empty()) {
					pos0.push_back(newpos);
				} else {
					newpos = pos1.back();
					pos1.pop_back();
					pos0.push_back(newpos);
				}
			} else {
				if (pos0.empty()) {
					pos1.push_back(newpos);
				} else {
					newpos = pos0.back();
					pos0.pop_back();
					pos1.push_back(newpos);
				}
			}
			ans[i] = newpos;
		}
		cout << pos0.size() + pos1.size() << endl;
		for (auto it : ans) cout << it + 1 << " ";
		cout << endl;
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