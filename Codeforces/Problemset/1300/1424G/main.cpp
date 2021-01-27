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
    cin>>n;
    vector<pii> dates;
    For(i, 0, n){
        int st, end;
        cin >> st >> end;
        dates.pb({st, 1});
        dates.pb({end, -1});
    }
    sort(dates.begin(), dates.end());
    int ans1 = 0, ans2 = 0;
    int c = 0;
    For(i, 0, dates.size()){
        c += dates[i].S;
        if(c > ans1){
            ans1 = c;
            ans2 = dates[i].F;
        }
    }
    cout << ans2 << " " << ans1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
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