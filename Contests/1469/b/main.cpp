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
    int n, m;
    cin >> n;
    vector<int> a(n);
    For(i, 0, n) cin >> a[i];
    cin >> m;
    vector<int> b(m);
    For(i, 0, m) cin >> b[i];
    int ans1 = 0, ans2 = 0;
    For(i, 0, n){
        if(i) a[i] += a[i-1];
        ans1 = max(ans1, a[i]);
    }
    For(i, 0, m){
        if(i) b[i] += b[i-1];
        ans2 = max(ans2, b[i]);
    }
    cout << max(0, ans1 + ans2) << '\n';
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