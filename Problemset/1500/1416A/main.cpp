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
    vector<int> a(n + 1);
    vector<vector<int>> ind(n + 1, {0});
    For(i, 1, n + 1) cin >> a[i];
    For(i, 1, n + 1) ind[a[i]].pb(i);
    For(i, 1, n + 1) ind[i].pb(n + 1);
    vector<int> ans(n + 2, n + 1);
    For(i, 1, n+1){
        int mx = 0;
        For(j, 0, ind[i].size() - 1){
            mx = max(mx, ind[i][j + 1] - ind[i][j] - 1);
        }
        ans[mx + 1] = min(ans[mx + 1], i);
    }
    For(i, 1, n + 1){
        cout << (ans[i] == n + 1 ? -1 : ans[i]) << " ";
        ans[i + 1] = min(ans[i], ans[i + 1]);
    }
    cout << '\n';
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