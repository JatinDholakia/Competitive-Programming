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
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    For(i, 0, n){
        cin >> a[i];
    }
    int idx = -1;
    for(int i = n-1; i >= 0; i--){
        if(a[i] != i+1){
            idx = i;
            break;
        }
    }
    idx++;
    double neg = 1;
    For(i, 0, m){
        int r;
        double p;
        cin >> r >> p;
        if(r >= idx){
            neg *= 1-p;
        }   
    }
    if(idx == 0){
        neg = 0;
    }
    cout << (1-neg) << '\n';
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