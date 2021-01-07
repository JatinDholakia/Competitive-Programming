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
const int INF = 1e9;

void solve() {
    int n; cin>>n;
    vector<int> v(n+1);
    For(i, 0, n) cin>>v[i];
 
    if(n <= 3) {cout<<v[0]<<endl; return;}
 
    vector<vector<int>> dp(n+1, vector<int>(2));  //[x][y]
 
    dp[0][0] = v[0];
    dp[0][1] = v[0];
    dp[1][0] = INF;
    dp[1][1] = v[0]+v[1];
    dp[2][0] = v[0]+v[2];
    dp[2][1] = dp[2][0];
 
    for(int i=3;i < n+1; i++){
 
        dp[i][0] = min(dp[i-2][1], dp[i-3][1]) + v[i];
        dp[i][1] = min(dp[i][0], dp[i-1][0]+v[i]);
    }
    //forn(i,n) cout<<dp[i][0]<<" "<<dp[i][1]<<endl;
 
    cout<<min(dp[n][0],dp[n][1])<<endl;
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