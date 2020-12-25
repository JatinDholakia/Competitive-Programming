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
    vector<ll> a(n);
    For(i, 0, n) {
        cin >> a[i];
    }
    bool ok = 1;
    For(i, 0, 64){
        if(!ok) break;
        int c = 0;
        For(j, 0, n){
            if(a[j] % k == 0){
                a[j] /= k;
            }
            else if(c == 0 && a[j] % k == 1){
                a[j]--;
                a[j] /= k;
                c = 1;
            }
            else{
                ok = 0;
            }
        }
        cout << '\n';
    }
    cout << (ok?"YES":"NO") << '\n';
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