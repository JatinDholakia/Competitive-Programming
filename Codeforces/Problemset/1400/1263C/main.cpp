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
    vector<int> ans1, ans2;
    ans1.pb(0);
    ans1.pb(1);
    ans2.pb(n);
    for(int i = 2; i*i <= n; i++){
        if(n / i != ans2.back()){
            ans1.pb(i);
            ans2.pb(n / i);
        }
    }
    // reverse(ans2.begin(), ans2.end());
    if(ans1.back() == ans2.back()){
        ans1.pop_back();
    }
    ans1.insert(ans1.end(), ans2.rbegin(), ans2.rend());
    cout << ans1.size() << '\n';
    print(ans1);
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