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
    int x, n;
    n = s.size();
    cin >> x;
    string w(n, '1');
    For(i, 0, n){
        if(s[i] == '0'){
            if(i - x >= 0) w[i - x] = '0';
            if(i + x < n) w[i + x] = '0';
        }
    }
    bool ok = 1;
    For(i, 0, n) {
        if(s[i] == '1'){
            ok &= (i - x >= 0 && w[i - x] == '1') || (i + x < n && w[i + x] == '1');
        }
    }
    cout << (ok ? w : "-1") << '\n';
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