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
    vector<int> v(n), a(n), p, q, ans(n);
    For(i, 0, n){
        cin >> v[i];
    }
    For(i, 0, n){
        cin >> a[i];
    }
    For(i, 0, n){
        if(a[i] == 1){
            p.pb(v[i]);
        }
        else{
            q.pb(v[i]);
        }
    }
    sort(q.begin(), q.end(), greater<int>());
    int idx = 0;
    For(i, 0, n){
        if(a[i] == 1){
            ans[i] = v[i];
        }
        else{
            ans[i] = q[idx++];
        }
    }
    print(ans);
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