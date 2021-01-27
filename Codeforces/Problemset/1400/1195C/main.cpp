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
    vector<int> a(n), b(n);
    vector<ll> dp(3);
    For(i, 0, n) cin >> a[i];
    For(i, 0, n) cin >> b[i];
    dp[0] = 0;
    dp[1] = a[0];
    dp[2] = b[0];
    For(i, 1, n){
        vector<ll> tmp(3);
        tmp[0] = *max_element(dp.begin(), dp.end());
        tmp[1] = a[i] + max(dp[0], dp[2]);
        tmp[2] = b[i] + max(dp[0], dp[1]);
        dp = tmp;
    }
    cout << *max_element(dp.begin(), dp.end()) << '\n';
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