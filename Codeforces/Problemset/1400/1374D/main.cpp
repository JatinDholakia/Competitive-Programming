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
    vector<int> a(n);
    int mx = 0;
    map<int,int> need;
    For(i, 0, n){
        cin >> a[i];
        if(a[i] % k == 0) continue;
        need[k - a[i] % k]++;
        mx = max(mx, need[k - a[i] % k]);
    }
    ll ans = 0;
    for(auto it : need){
        if(it.S == mx){
            ans = k * 1ll * (it.S - 1) + it.F + 1;
        }
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