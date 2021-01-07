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
    int n, k;
    string s;
    cin >> n >> k;
    cin >> s;
    bool ans = 1;
    For(i, 0, k){
        int j = i;
        bool one = 0, zero = 0;
        while(j < n){
            if(s[j] == '1') one = 1;
            else if(s[j] == '0') zero = 1;
            j += k;
        }
        if(zero && one){
            ans = 0;
            break;
        }
        else if(zero) s[i] = '0';
        else if(one) s[i] = '1';
    }
    int one = 0, zero = 0, que = 0;
    For(i, 0, k){
        if(s[i] == '1') one++;
        else if(s[i] == '0') zero++;
        else que++;
    }
    if(abs(zero - one) > que) ans = 0;
    cout << (ans ? "YES\n" : "NO\n");
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