#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

//=======================

void solve() {
    ll a,b,x,y,n;
    ll ans1,ans2;
    cin>>a>>b>>x>>y>>n;  
    ll i = max(a-n,x);
    ll j = max(b-(n-(a-i)),y);
    ans1 = i*j;
    i = max(b-n,y);
    j = max(a-(n-(b-i)),x);
    ans2 = i*j;
    cout<<min(ans1,ans2)<<"\n";
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