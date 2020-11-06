#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define For(i,x,n) for(int i=x;i<n;i++)
#define pb push_back
#define print(vec) for(int i=0;i<vec.size();i++) cout<<vec[i]<<" ";
#define pii pair<int,int>
//=======================

void solve() {
    int n;
    cin>>n;
    vector<ll> v(n);
    For(i,0,n){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll ans;
    ll tmp = 1;
    For(i,n-5,n){
        tmp *= v[i];
    }
    ans = tmp;
    tmp = 1;
    tmp *= v[0]*v[1];
    tmp *= v[n-3] * v[n-2] * v[n-1];
    ans = max(ans,tmp);
    tmp = 1;
    For(i,0,4){
        tmp *= v[i];
    }
    tmp *= v[n-1];
    ans = max(ans,tmp);
    cout<<ans<<'\n';
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