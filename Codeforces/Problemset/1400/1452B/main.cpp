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
    int mx = INT_MIN;
    For(i, 0, n){
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    ll rem = 0;
    For(i, 0, n){
        rem += mx - a[i];
    }
    rem -= mx;
    if(rem < 0){
        int k = floor(rem /(double)(n-1));       
        k *= -1;
        rem += k*(n-1);
    }
    cout << rem << '\n';
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