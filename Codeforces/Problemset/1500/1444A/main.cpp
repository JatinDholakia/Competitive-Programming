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
vector<int> primeFactors(int n) {
    vector<int> ans;
    while (n%2 == 0){
        ans.push_back(2);
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i+2){
        if(n%i == 0){
            ans.push_back(i);
        }
        while (n%i == 0){
            // ans.push_back(i);
            n = n/i;
        }
    }
    if (n > 2)
    ans.push_back(n);
    return ans;
}
void solve() {
    ll p;
    int q;
    cin >> p >> q;
    if(p % q != 0) {
        cout << p << '\n';
        return;
    }
    vector<int> pf = primeFactors(q);
    ll x = 0;
    For(i, 0, pf.size()){
        ll cand = p;
        int tmp = pf[i];
        while(cand % q == 0) cand /= tmp;
        x = max(x, cand);
    }
    cout << x << '\n';
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