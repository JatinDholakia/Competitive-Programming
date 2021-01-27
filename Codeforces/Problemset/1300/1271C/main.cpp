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
    vector<int> poss(4); // (1,0), (0,1), (-1,0), (0,-1)
    vector<pii> comb = {{1,0}, {0, 1}, {-1,0}, {0, -1}};
    int n, sx, sy;
    cin >> n >> sx >> sy;
    For(i, 0, n){
        int x, y;
        cin >> x >> y;
        pii dis = {x - sx, y - sy};
        if(dis.F >= 1){
            poss[0]++;
        }
        else if(dis.F <= -1){
            poss[2]++;
        }
        if(dis.S >= 1){
            poss[1]++;
        }
        else if(dis.S <= -1){
            poss[3]++;
        }
    }
    int idx = max_element(poss.begin(), poss.end()) - poss.begin();
    int ans = poss[idx];
    pii coords = {sx + comb[idx].F, sy + comb[idx].S};
    cout << ans << '\n';
    cout << coords.F << " " << coords.S << '\n';
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