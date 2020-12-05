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
    vector<int> v(n);
    int mn = 1e9;
    For(i, 0, n){
        cin >> v[i];
        mn = min(mn, v[i]);
    }
    vector<int> ans(n), sw;
    For(i, 0, n){
        if(v[i] % mn == 0){
            sw.pb(v[i]);
        }
        else{
            ans[i] = v[i];
        }
    }
    sort(sw.begin(), sw.end());
    int id = 0;
    For(i, 0, n){
        if(ans[i] == 0){
            ans[i] = sw[id++];
        }
    }
    bool ok = 1;
    For(i, 1, n){
        if(ans[i] < ans[i-1]){
            ok = 0;
        }
    }
    if(ok){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
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