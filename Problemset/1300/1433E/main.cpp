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
const int mod = 1'000'000'007;


int mpow(int base, int exp) {
  int result = 1;
  while (exp > 0) {
    if (exp & 1) result = ((long long)result * base) % mod;
    base = ((long long)base * base) % mod;
    exp >>= 1;
  }
  return result;
}

namespace nCr {
    int fact[200005],ifact[200005];
    int get(int n, int r) {
        if(n<r||r<0||n<0) return 0;
        return (((fact[n]*1LL*ifact[r])%mod)*1LL*ifact[n-r])%mod;
    }
    void init() {
        fact[0]=1;
        for(int i = 1; i <= 200000; i++) {
            fact[i] = (fact[i-1] * 1LL * i)%mod;
        }

        ifact[200000] = mpow(fact[200000], mod-2);
        for(int i=199999; i>=0; i--) {
            ifact[i] = (ifact[i+1] * 1LL * (i+1))%mod;
        }
    }
};

void solve() {
    int n;
    cin>>n;
    nCr::init();
    ll ans = nCr::get(n,n/2);
    ans *= nCr::fact[n/2 - 1];
    ans *= nCr::fact[n/2 - 1];
    ans /= 2;
    cout<<ans<<'\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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