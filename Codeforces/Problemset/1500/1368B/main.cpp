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
    ll k;
    cin >> k;
    int n = 10;
    vector<int> cnt(n, 1);
    ll ans = 1;
    while(ans < k){
        For(i, 0, n){
            if(ans < k){
                ans /= cnt[i];
                cnt[i]++;
                ans *= cnt[i];
            }
        }
    }
    string s = "codeforces";
    string ans_s = "";
    For(i, 0, n){
        For(j, 0, cnt[i]){
            ans_s += s[i];
        }
    }
    cout << ans_s << '\n';
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