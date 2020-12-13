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
    vector<int> a(n), w(k);
    For(i, 0, n){
        cin >> a[i];
    }
    For(i, 0, k){
        cin >> w[i];
        w[i] -= 1;
    }
    sort(a.begin(), a.end());
    sort(w.begin(), w.end());
    ll ans = 0;
    For(i, 0, k){
        ans += a[n-1-i];
        if(w[i] == 0){
            ans += a[n-1-i];
        }
    }
    reverse(w.begin(), w.end());
    int j = 0;
    For(i, 0, k){
        if(w[i] != 0){
            ans += a[j];
            j += w[i];
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