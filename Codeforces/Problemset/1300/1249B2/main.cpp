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
const int mxn = 2e5 + 5;
int ans[mxn], vis[mxn], p[mxn];

void dfs(int v, int t){
    vis[v] = 1;
    if(!vis[p[v]]){
        dfs(p[v], t + 1);
        ans[v] = ans[p[v]];
    }
    else{
        ans[v] = t;
    }
}
void solve() {
    int n;
    cin >> n;
    For(i, 1, n+1){
        cin >> p[i];
        vis[i] = 0;
    }
    For(i, 1, n+1){
        if(!vis[i]){
            dfs(i, 1);
        }
    }
    For(i, 1, n+1){
        cout << ans[i] << " ";
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