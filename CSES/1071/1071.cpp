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
    ll x, y;
    cin >> x >> y;
    if(x >= y && x % 2 == 1){
        cout << (x - 1) * (x - 1) + y;
    }
    else if(x >= y && x % 2 == 0){
        cout << x * x - y + 1;
    }
    else if(x < y && y % 2 == 1){
        cout << y * y - x + 1;
    }
    else{
        cout << (y - 1) * (y - 1) + x;
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