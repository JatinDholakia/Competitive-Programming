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
    vector<int> s(n+1), dp(n+1,1);
    For(i, 1, n+1){
        cin >> s[i];
    }
    int ans = 1;
    For(i, 2, n+1){
        if(s[1] < s[i]){
            dp[i] = max(dp[i], 1+dp[1]);
        }
        ans = max(ans, dp[i]);
        for(int j = 2; j*j <= i; j++){
            if(i % j == 0){
                if(s[j] < s[i]){
                    dp[i] = max(dp[i], 1+dp[j]);
                }
                if(s[i/j] < s[i]){
                    dp[i] = max(dp[i], 1+dp[i/j]);
                }
                ans = max(ans, dp[i]);
            }
        }
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