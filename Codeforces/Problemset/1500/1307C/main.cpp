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
    string s;
    cin >> s;
    int n = s.size();
    vector<vector<ll>> two(26, vector<ll> (26));
    vector<ll> one(26);
    For(i, 0, n){
        int c = s[i] - 'a';
        For(j, 0, 26){
            two[j][c] += one[j];
        }
        one[c]++;
    }
    ll ans = 0;
    For(i, 0, 26){
        ans = max(ans, one[i]);
    }
    For(i, 0, 26){
        For(j, 0, 26){
            ans = max(ans, two[i][j]);
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
    // cin >> t;
    while(t--) {
      solve();
    }
    return 0;
}