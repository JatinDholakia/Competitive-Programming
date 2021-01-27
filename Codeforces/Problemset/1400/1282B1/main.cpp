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
    int n, p, k;
    cin >> n >> p >> k;
    vector<int> a(n);
    For(i, 0, n){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int c1 = 0, c2 = 0;
    int tmp = p;
    if(a[0] <= tmp){
        tmp -= a[0];
        c1++;
    }
    int i = 2;
    while(tmp && i < n){
        if(a[i] <= tmp){
            tmp -= a[i];
            c1 += 2;
            i += 2;
        }
        else break;
    }
    tmp = p;
    i = 1;
    while(tmp && i < n){
        if(a[i] <= tmp){
            tmp -= a[i];
            c2 += 2;
            i += 2;
        }
        else break;
    }
    cout << max(c1, c2) << '\n';
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