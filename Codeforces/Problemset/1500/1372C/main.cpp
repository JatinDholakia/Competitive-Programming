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
    int n;
    cin >> n;
    vector<int> a(n + 1);
    bool sorted = 1;
    For(i, 1, n + 1){
        cin >> a[i];
        if(i != a[i]) 
            sorted = 0;
    }
    if(sorted){
        cout << 0 << '\n';
        return;
    }    
    int i = 1, j = n;
    while(a[i] == i)
        i++;
    while(a[j] == j)
        j--;
    bool ok = 1;
    For(k, i, j + 1){
        if(k == a[k]) ok = 0;
    }
    cout << (ok ? 1 : 2) << '\n';
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