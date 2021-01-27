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
    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    vector<ll> pre(n);
    For(i, 0, n){
        cin >> a[i];
        pre[i] = a[i];
        if(i) pre[i] += pre[i-1];
    }
    int idx = upper_bound(pre.begin(), pre.end(), s) - pre.begin();
    if(idx == n){
        cout << 0 << '\n';
        return;
    }
    int elem = (max_element(a.begin(), a.begin() + idx+1) - a.begin());
    cout << (elem + 1) << '\n';
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