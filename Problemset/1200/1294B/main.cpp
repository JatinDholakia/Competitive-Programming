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
    vector<pii> pts(n);
    pii curr = {0,0};
    For(i,0,n){
        int x,y;
        cin >> x >> y;
        pts[i] = {x,y};
    }
    sort(pts.begin(),pts.end());
    bool ok = 1;
    int max_y = 0;
    For(i,0,n){
        if(pts[i].S < max_y){
            ok = 0;
        }
        max_y = max(max_y,pts[i].S);
    }
    string ans = "";
    if(!ok){
        cout<<"NO"<<'\n';
    }
    else{
        cout<<"YES"<<'\n';
        For(i,0,n){
            For(j,0,pts[i].F-curr.F){
                ans += 'R';
            }
            For(j,0,pts[i].S - curr.S){
                ans += 'U';
            }
            curr = pts[i];
        }
        cout<<ans<<'\n';
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