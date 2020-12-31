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
const int mod = 1e9 + 7;
void solve() {
    int h, w;
    cin >> h >> w;
    vector<int> r(h), c(w);
    vector<vector<int>> mat(h, vector<int> (w, -1));
    For(i, 0, h) cin >> r[i];
    For(i, 0, w) cin >> c[i];
    bool ok = 1;
    For(i, 0, h){
        int x = r[i];
        For(j, 0, x){
            if(mat[i][j] == -1 || mat[i][j] == 1){
                mat[i][j] = 1;
            }
            else ok = 0;
        }
        if(x < w){
            if(mat[i][x] != 1)
                mat[i][x] = 0;
            else ok = 0;
        } 
    }
    For(i, 0, w){
        int x = c[i];
        For(j, 0, x){
            if(mat[j][i] == -1 || mat[j][i] == 1){
                mat[j][i] = 1;
            }
            else ok = 0;
        }
        // deb(ok);
        if(x < h) {
            if(mat[x][i] != 1) mat[x][i] = 0;
            else ok = 0;
        }
    }
    int cnt = 0;
    For(i, 0, h){
        For(j, 0, w){
            if(mat[i][j] == -1) cnt++;
        }
    }
    int ans = 1;
    For(i, 0, cnt){
        ans = (ans*2) % mod;
    }
    cout << (ok?ans:0) << '\n';
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