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
    vector<int> a(n), extra;
    For(i, 0, n){
        cin >> a[i];
    }
    For(i, 0, n){
        if(a[i] == -1){
            if(i-1 >= 0 && a[i-1] >= 0)
                extra.pb(a[i-1]);
            if(i+1 < n && a[i+1] >= 0)
                extra.pb(a[i+1]);
        }
    }
    if(extra.size() == 0){
        cout << 0 << " " << 0 << '\n';
        return;
    }
    int k = (*max_element(extra.begin(), extra.end()) + *min_element(extra.begin(), extra.end())) / 2;
    int max_diff = 0;
    For(i, 0, n){
        if(a[i] == -1){
            a[i] = k;
        }
        if(i)
            max_diff = max(max_diff, abs(a[i-1] - a[i]));
    }
    cout << max_diff << " " << k << '\n';
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