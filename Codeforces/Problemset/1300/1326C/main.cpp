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
    int n, k;
    cin >> n >> k;
    vector<int> v(n), idx;
    For(i, 0, n){
        cin >> v[i];
    }
    vector<int> copy = v;
    nth_element(copy.begin(), copy.begin()+n-k, copy.end());
    int elem = copy[n-k];
    ll s = 0;
    For(i, 0, n){
        if(v[i] >= elem){
            idx.pb(i);
            s += v[i];
        }
    }
    int mod = 998244353;
    ll num = 1;
    For(i, 1, idx.size()){
        num = (num * (idx[i] - idx[i-1])) % mod ;
    }
    cout << s << " " << num;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
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