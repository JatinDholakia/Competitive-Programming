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
    int n, q;
    cin >> n >> q;
    vector<vector<bool>> mat(2, vector<bool>(n)); // row1, row2
    int cnt = 0;
    For(i, 0, q){
        int r, c;
        cin >> r >> c;
        r--; c--;
        int delta = (mat[r][c] == 0)? 1 : -1;
        mat[r][c] = !mat[r][c];
        For(dy, -1, 2){
            if(c + dy < 0 || c + dy >= n) continue;
            if(mat[1-r][c+dy] == 1) cnt += delta;
        }
        cout << (cnt ? "NO" : "YES") << '\n';
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