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
    ll n,W;
    cin >> n >> W;
    vector<ll> all_wts(n);
    vector<ll> wts;
    ll l = (ll)(ceil(W/2.0));
    ll ans = -1;
    For(i,0,n){
        ll tmp;
        cin>>tmp;
        all_wts[i] = tmp;
        if(tmp >= l && tmp <= W){
            ans = i;
        }
        else if(tmp < l){
            wts.pb(i);
        }
    }
    if(ans != -1){
        cout<<1<<'\n';
        cout<<(ans+1)<<'\n';
    }
    else{
        ll wt = 0;
        vector<ll> ans2;
        int i = 0;
        while(i<wts.size() && wt<l){
            wt += all_wts[wts[i]];
            ans2.pb(wts[i]+1);
            i++;
        }
        if(wt >= l){
            cout<<ans2.size()<<'\n';
            print(ans2);
        }
        else{
            cout<<-1<<'\n';
        }
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