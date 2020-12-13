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
    int l = 0, r = n - 1;
    vector<int> a(n), idx(n+1);
    For(i, 0, n){
        cin >> a[i];
        idx[a[i]] = i;
    }
    vector<bool> ans(n);
    ans[n-1] = 1;
    int min_dropped = n+1;
    for(int i=n-2; i >= 0; i--){
        min_dropped = min(max(a[l], a[r]), min_dropped);
        if(min_dropped > i+1){
            ans[i] = 1;
        }
        else{
            ans[i] = 0;
        }
        if(a[l] > a[r]){
            l++;
        }
        else{
            r--;
        }
    }
    for(int i=0; i < n; i++){
        cout << ans[i];
    }
    cout << '\n';
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