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
    ll n, m, q;
    cin >> n >> m >> q;
    ll x = __gcd(n, m);
    n /= x;
    m /= x;
    For(i, 0, q){
        ll sx, sy, ex, ey;
        cin >> sx >> sy >> ex >> ey;
        ll pos1, pos2;
        if(sx == 1){
            pos1 = (sy + n - 1) / n;
        }        
        else{
            pos1 = (sy + m -1) / m;
        }
        if(ex == 1){
            pos2 = (ey + n - 1) / n;
        }
        else{
            pos2 = (ey + m - 1) / m;
        }
        if(pos1 == pos2){
            cout << "YES\n";
        }
        else{
            cout <<"NO\n";
        }
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
    // cin >> t;
    while(t--) {
      solve();
    }
    return 0;
}