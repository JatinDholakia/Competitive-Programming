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

bool comp(pii p1, pii p2){
    return p1.F < p2.F;
}

void solve() {
    int s, b;
    cin >> s >> b;
    vector<int> a(s);
    For(i, 0, s) cin >> a[i];
    vector<pii> base(b);
    For(i, 0, b){
        int d, g;
        cin >> d >> g;
        base[i] = {d, g};
    }
    sort(base.begin(), base.end());
    For(i, 1, b){
        base[i].S += base[i-1].S;
    }
    For(i, 0, s){
        int ship = a[i];
        int idx = upper_bound(base.begin(), base.end(), pii{ship, -1}, comp) - base.begin() - 1;
        cout << ((idx >= 0)?base[idx].S:0) << " ";
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