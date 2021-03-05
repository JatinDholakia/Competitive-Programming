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
    /*
        f(x,y) = x & (~y)
        f(arr) = a1 & (~a2) & (~a3) ... (~an)
    */
    int n;
    cin >> n;
    int a[n], pref[n], suff[n];
    For(i, 0, n){
        cin >> a[i];
    }
    pref[0] = suff[n-1] = INT_MAX;
    For(i, 1, n){
        pref[i] = pref[i-1] & (~a[i-1]);
    }
    for(int i = n-2; i >= 0; i--){
        suff[i] = suff[i+1] & (~a[i+1]);
    }
    int ans = INT_MIN, pos = -1, tmp;
    For(i, 0, n){
        tmp = pref[i] & a[i] & suff[i];
        if(tmp > ans){
            ans = tmp;
            pos = i;
        }
    }
    cout << a[pos] << " ";
    For(i, 0, n){
        if(i != pos){
            cout << a[i] << " ";
        }
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
    // cin >> t;
    while(t--) {
      solve();
    }
    return 0;
}