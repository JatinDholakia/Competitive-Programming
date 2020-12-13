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
    unordered_map<int,int> mp, cnt;
    For(i, 0, n){
        int tmp;
        cin >> tmp;
        mp[tmp] = i;
    }
    For(i, 0, n){
        int tmp;
        cin >> tmp;
        if(mp[tmp] - i < 0){
            cnt[mp[tmp] - i + n]++;
        }
        else{
            cnt[mp[tmp] - i]++;
        }
    }
    int ans = 0;
    for(auto x : cnt){
        ans = max(ans, x.S);
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
    // cin >> t;
    while(t--) {
      solve();
    }
    return 0;
}