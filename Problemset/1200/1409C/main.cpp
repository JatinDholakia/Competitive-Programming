#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define For(i,x,n) for(int i=x;i<n;i++)
#define pb push_back
#define print(vec) for(int i=0;i<vec.size();i++) cout<<vec[i]<<" ";
#define pii pair<int,int>
//=======================

void solve() {
int n, x, y;
    cin >> n >> x >> y;
    int diff = y - x;
    for (int delta = 1; delta <= diff; ++delta) {
        if (diff % delta) continue;
        if (diff / delta + 1 > n) continue;
        int k = min((y - 1) / delta, n - 1);
        int a0 = y - k * delta;
        for (int i = 0; i < n; ++i) {
            cout << (a0 + i * delta) << ' ';
        }
        cout << endl;
        break;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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