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
    vector<int> sign(n+1);
    sign[0] = 1;
    For(i, 1, n+1){
        int tmp;
        cin >> tmp;
        sign[i] = (tmp > 0) ? sign[i-1] : -1*sign[i-1];
    }
    vector<pii> pref(n+1); // pos, neg
    pref[0] = {0, 0};
    ll pos = 0, neg = 0;
    For(i, 1, n+1){
        if(sign[i-1] > 0) pref[i] = {pref[i-1].F + 1, pref[i-1].S};
        else pref[i] = {pref[i-1].F, pref[i-1].S + 1};
        pos += (sign[i] > 0) ? pref[i].F : pref[i].S;
        neg += (sign[i] > 0) ? pref[i].S : pref[i].F;
    }

    cout << neg << " " << pos << '\n';
    
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