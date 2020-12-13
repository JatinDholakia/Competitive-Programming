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
    int n, k, d;
    cin >> n >> k >> d;
    vector<int> a(n);
    For(i, 0, n){
        cin >> a[i];
    }
    unordered_map<int,int> mp;
    int l = 0, r = d;
    For(i, 0, d){
        mp[a[i]]++;
    }
    int ans = mp.size();
    For(i, 0, n-d){
        mp[a[l+i]]--;
        mp[a[r+i]]++;
        if(mp[a[l+i]] == 0){
            mp.erase(a[l+i]);
        }
        if(mp.size() < ans){
            ans = mp.size();
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