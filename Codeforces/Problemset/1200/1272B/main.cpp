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
	int u = 0, d = 0, l = 0, r = 0;
	For(i, 0, s.size()) {
		if(s[i] == 'L')
			l++;
		else if(s[i] == 'R')
			r++;
		else if(s[i] == 'U')
			u++;
		else if(s[i] == 'D')
			d++;
	}
	int c1 = min(l, r);
	int c2 = min(u, d);
	c1 = c2 == 0 ? min(c1, 1) : c1;
	c2 = c1 == 0 ? min(c2, 1) : c2;
	string ans;
	ans.append(c1, 'R');
	ans.append(c2, 'U');
	ans.append(c1, 'L');
	ans.append(c2, 'D');
	cout << ans.size() << '\n';
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
    cin >> t;
    while(t--) {
      solve();
    }
    return 0;
}