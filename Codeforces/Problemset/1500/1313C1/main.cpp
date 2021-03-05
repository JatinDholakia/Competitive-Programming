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
    vector<int> m(n), answer(n), current(n);
    For(i, 0, n){
        cin >> m[i];
    }
    ll curr = 0;
    ll ans = 0;
    For(i, 0, n){
        current[i] = m[i];
        curr += m[i];
        int mx = m[i];
        for(int j = i-1; j >= 0; j--){
            mx = min(mx, m[j]);
            curr += mx;
            current[j] = mx;
        }   
        mx = m[i];
        For(j, i + 1, n){
            mx = min(mx, m[j]);
            curr += mx;
            current[j] = mx;
        }
        if(curr > ans){
            ans = curr;
            answer = current;
        }
        curr = 0;
    }
    print(answer);
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