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
    int n, p, k;
    cin >> n >> p >> k;
    string s;
    cin >> s;
    int x, y;
    cin >> x >> y;
    vector<int> cost(n);
    For(i,p-1,n){
        if(s[i] == '0'){
            cost[i] = x;
        }
    }
    for(int i = n-1; i >= p-1; i--){
        if(i+k < n){
            cost[i] += cost[i+k];
        }
    }
    int ans = 1e9;
    for(int i=p-1;i<n;i++){
        cost[i] += y*(i-p+1);
        ans = min(ans, cost[i]);
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
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