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
    vector<int> a(n);
    For(i, 0, n){
        cin >> a[i];
    }
    ll x = 0;
    For(i, 1, n){
        x += abs(a[i] - a[i-1]);
    }
    int y = max(abs(a[1] - a[0]), abs(a[n-1] - a[n-2]));
    For(i, 1, n-1){
        y = max(abs(a[i] - a[i-1]) + abs(a[i] - a[i+1]) - abs(a[i-1] - a[i+1]), y);
    }
    cout << (x - y) << '\n';
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