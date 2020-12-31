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
    if(n == 3){
        cout << 2 << '\n' << 3 << " " << 2 << '\n' << 3 << " " << 2 << '\n';
        return;
    }
    if(n == 4){
        cout << 3 << '\n' << 3 << " " << 4 << '\n' << 4 << " " << 2 << '\n' << 4 << " " << 2 << '\n';
        return;
    }
    cout << n - 2 << '\n';
    for(int i = n-2; i > 2; i--){
        cout << i << " " << n - 1 << '\n';
    }
    cout << n << " " << n - 1 << '\n';
    cout << n << " " << 2 << '\n';
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