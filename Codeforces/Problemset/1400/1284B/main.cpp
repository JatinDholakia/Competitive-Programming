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
    vector<int> l, r; // (min), (max)
    ll ans = 0;
    ll cnt = 0;
    For(i, 0, n){
        int s;
        cin >> s;
        vector<int> tmp(s);
        int tmp1;
        bool ok = 0;
        For(i, 0, s){
            cin >> tmp[i];
            if(!i) {
                tmp1 = tmp[i];
                continue;
            }
            if(tmp[i] > tmp1) ok = 1;
            else{
                tmp1 = min(tmp1, tmp[i]);
            }
        }
        if(ok){
            cnt++;
        }
        else{
            int tmp2 = *min_element(tmp.begin(), tmp.end());
            l.pb(tmp2);
            tmp2 = *max_element(tmp.begin(), tmp.end());
            r.pb(tmp2);
        }
    }
    std::sort(l.begin(), l.end());
    std::sort(r.begin(), r.end());
    For(i, 0, l.size()){
        ans += r.end() - upper_bound(r.begin(), r.end(), l[i]); 
    }
    ans += cnt*cnt + 2*cnt*(n-cnt);
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        // freopen("output.txt","w",stdout);
    #endif
    int t = 1;
    // cin >> t;
    while(t--) {
      solve();
    }
    return 0;
}