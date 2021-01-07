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
string s;
int cost(int l, int r, char c){
    int mid = (l + r) / 2;
    int tmp1 = 0, tmp2 = 0;
    For(i, l, mid + 1){
        if(s[i] != c) tmp1++;
    }
    For(i, mid + 1, r + 1){
        if(s[i] != c) tmp2++;
    }
    if(l == r) return tmp1;
    return min(tmp1 + cost(mid + 1, r, c + 1), tmp2 + cost(l, mid, c + 1));
}

void solve() {
    char c = 'a';
    int n;
    cin >> n >> s;
    int l = 0, r = n - 1;
    cout << cost(l, r, c) << '\n';
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