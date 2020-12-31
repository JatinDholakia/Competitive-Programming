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
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> p(m);
    For(i, 0, m) cin >> p[i];
    ll sub = 0;
    ll ps = (p[0]+k-1)/k;
    for(ll i = 0; i<m ; i++)
            sub += p[i] <= ps*k;
    
    ll ans = 1;
    
    ll r = sub;
    while(r < m)
    {
            ll rem = 0;
            while(r < m and p[r]-sub <= ps*k)
                    r++ , rem++;
            if(rem != 0)
                    sub += rem , ans++;
            else
                    ps = (p[r] - sub + k - 1)/k;
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
    // cin >> t;
    while(t--) {
      solve();
    }
    return 0;
}