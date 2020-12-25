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
    string s, tmp;
    cin >> s;
    string ans = s;
    int ans_k = 1;
    For(k, 0, n){
        tmp = s;
        reverse(tmp.begin(), tmp.begin() + k);
        reverse(tmp.begin() + k, tmp.end());
        reverse(tmp.begin(), tmp.end());
        if(n % 2 == ((k+1) % 2)) reverse(tmp.begin() + n - k,tmp.end());
        if(tmp < ans){
            ans = tmp;
            ans_k = k+1;
        }
    }
    cout << ans << '\n';
    cout << ans_k << '\n';
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