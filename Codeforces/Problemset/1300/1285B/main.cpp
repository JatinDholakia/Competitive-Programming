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
    int n;
    cin >> n;
    vector<ll> a(n);
    ll s = 0;
    bool ok = 1;
    For(i, 0, n){
        cin >> a[i];
        s += a[i];
        if(s <= 0) {
            ok = 0;
        }
    }
    s = 0;
    for(int i = n - 1; i >= 0; i--){
        s += a[i];
        if(s <= 0) ok = 0;
    }
    if(ok){
        cout << "YES" << '\n';
    }
    else{
        cout << "NO" << '\n';
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
    cin >> t;
    while(t--) {
      solve();
    }
    return 0;
}