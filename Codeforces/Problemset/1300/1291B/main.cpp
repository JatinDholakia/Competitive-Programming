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
    int n;
    cin >> n;
    vector<int> a(n);
    bool ok = 1, inv = 0;
    For(i, 0, n){
        cin >> a[i];
    }
    int i;
    for(i = 0; i < n; i++){
        if(a[i] < i){
            inv = 1;
            break;
        }
    }
    for(int j = n-1; j >= i; j--){
        if(a[j] < n-1-j){
            ok = 0;
        }
    }
    if(n % 2 == 0 && a[n/2] == n/2-1 &&  a[n/2 - 1]==n/2-1){
        ok = 0;
    }
    if(ok){
        cout << "Yes" << '\n';
    }
    else{
        cout << "No" << '\n';
    }
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