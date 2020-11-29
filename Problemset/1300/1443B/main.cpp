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
    ll a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    int la = -1e9;
    ll res = 0;
    int n = s.size();
    For(i,0,n){
        if(s[i]=='0') continue;
        if(i==0 || (s[i]=='1' && s[i-1]=='0')){
            res += min(b*(i-la-1),a);
        }
        la = i;
    }
    cout<<res<<'\n';

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