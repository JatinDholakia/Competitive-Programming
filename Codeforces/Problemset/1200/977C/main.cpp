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
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    For(i,0,n){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int ans;
    if(k == 0){
        ans = v[0] - 1;
    }
    else{
        ans = v[k - 1];
    }
    int cnt = 0;
    For(i,0,n){
        if(v[i] <= ans){
            cnt++;
        }
    }
    if(cnt != k || !(1 <= ans && ans <= 1e9)){
        cout<<-1<<'\n';
        return;
    }
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
    // cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}