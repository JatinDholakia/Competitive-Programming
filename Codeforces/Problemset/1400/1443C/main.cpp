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
const int mxn = 2e5 + 5;
int a[mxn], b[mxn], idx[mxn];

bool cmp(int x, int y){
    return a[x] < a[y];
}

void solve() {
    int n;
    cin >> n;
    ll s = 0;
    For(i, 0, n){
        cin >> a[i];
        idx[i] = i;
    }
    For(i, 0, n){
        cin >> b[i];
        s += b[i];
    }
    sort(idx, idx + n, cmp);

    ll ans = s;
    For(i, 0, n){
        s -= b[idx[i]];
        ans = min(ans, max(1ll*a[idx[i]], s));
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
    cin >> t;
    while(t--) {
      solve();
    }
    return 0;
}