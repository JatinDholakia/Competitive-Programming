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

bool check(ll n, ll s){
    ll sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum <= s;
}

void solve() {
    ll n, s;
    cin >> n >> s;
    ll curr = 10;
    ll ans = 0;
    while(!check(n, s)){
        ans += curr - (n % curr);
        n += curr - (n % curr);
        curr *= 10;
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