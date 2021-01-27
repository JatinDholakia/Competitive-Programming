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
#define set(x) cout.precision(x);cout << fixed;
const int mod = 1'000'000'007;
const int INF = 2'000'000'000;

void solve() {
    int n;
    cin >> n;
    unordered_map<int,int> mp;
    vector<int> a(n), pref(n + 1);
    int mx = 0;
    For(i, 0, n){
        cin >> a[i];
        mx = max(mx, a[i]);
        mp[a[i]]++;
        if(!i) 
            pref[i + 1] = a[i];
        else 
            pref[i + 1] = pref[i] + a[i];
    }
    int ans = 0;
    For(i, 0, n + 1){
        For(j, i + 2, n + 1){
            if(pref[j] - pref[i] > mx)
                break;
            if(mp.find(pref[j] - pref[i]) != mp.end()){
                ans += mp[pref[j] - pref[i]];
                mp.erase(pref[j] - pref[i]);
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