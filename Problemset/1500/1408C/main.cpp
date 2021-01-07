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

void solve() {
    set(8);
    int n, l;
    cin >> n >> l;
    vector<int> a(n);
    For(i, 0, n) cin >> a[i];
    double ca = 0, cb = l;
    int sa = 1, sb = 1;
    int i = 0, j = n - 1;
    double ans = 0;
    while (i <= j) {
        double d1 = a[i] - ca;
        double d2 = cb - a[j];
        double t1 = d1 * 1.0 / sa;
        double t2 = d2 * 1.0 / sb;
        if (t1 <= t2) {
            ans += t1;
            ca += d1;
            cb -= sb * 1.0 * t1;
            ++sa;
            i++;
        }
        else {
            ans += t2;
            cb -= d2;
            ca += sa * 1.0 * t2;
            ++sb;
            --j;
        }
    }
    double dist = abs(cb - ca);
    sa += sb;
    cout << ans + (dist / sa) << endl;
    return;
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