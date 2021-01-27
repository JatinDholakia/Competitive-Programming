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

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    For(i, 0, n) cin >> h[i];
    vector<pii> range(n); // min, max
    range[0] = {h[0], h[0]};
    bool ok = 1;
    For(i, 1, n){
        range[i] = {max(range[i-1].F - k + 1, h[i]), min(range[i-1].S + k -1, h[i] + k - 1)};
        if(range[i].F > range[i].S) {
            ok = 0;
            break;
        }
    }
    if(range[n-1].F > h[n-1] || range[n-1].S < h[n-1]) ok = 0;
    cout << (ok?"YES\n":"NO\n");
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