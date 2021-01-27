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
    int n; cin>>n;
    vector<int>a(n,0);
    for(int i = 0; i < n; i++) cin>>a[i];
    sort(a.begin(),a.end());
    int j = 0;
    vector<int>b(n,0);
    for(int i = 1; i < n; i+= 2) {
        b[i] = a[j++];
    }    
    for(int i = 0; i < n; i+= 2) {
        b[i] = a[j++];
    }
    int ans = 0;
    for(int i = 1; i < n-1; i++) {
        if(b[i] < b[i-1] && b[i] < b[i+1]) ans++;
    }
    cout<<ans<<endl;
    for(auto v : b) cout<<v<<" ";
    cout<<endl;

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