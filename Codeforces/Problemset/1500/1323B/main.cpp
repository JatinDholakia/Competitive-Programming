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

vector<int> gao(vector<int> a) {
    int n = a.size();
    vector<int> res(n + 1);
    int i = 0;
    while (i < n) {
        if (a[i] == 0) {
            i++;
            continue;
        }

        int j = i;
        while (j < n && a[j] == 1) {
            j++;
        }
        for (int len = 1; len <= j - i; len++) {
            res[len] += j - i - len + 1;
        }
        i = j;
    }

    return res;
}


void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    For(i, 0, n){
        cin >> a[i];
    }
    For(i, 0, m){
        cin >> b[i];
    }
    auto countA = gao(a);
    auto countB = gao(b);
    vector<int> divisors;
    int i = 1;
    for(; i * i < k; i++){
        if(k % i == 0){
            divisors.pb(i);
            divisors.pb(k / i);
        }
    }
    if(i * i == k)
        divisors.pb(i);
    ll ans = 0;
    for(int x : divisors){
        if(x < countA.size() && k / x < countB.size()){
            ans += countA[x] * countB[k / x];
        }
    }
    cout << ans << '\n';
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