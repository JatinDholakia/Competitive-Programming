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
    vector<ll> v(n+1),s(n+1);
    For(i,1,n+1){
        cin>>v[i];
        s[i] = v[i];
        v[i] += v[i-1];
    }
    sort(s.begin(),s.end());
    For(i,1,n+1){
        s[i] += s[i-1];
    }
    int m;
    cin>>m;
    For(i,0,m){
        int type,l,r;
        cin >> type >> l >> r;
        if(type==1){
            cout<<(v[r]-v[l-1])<<'\n';
        }
        else{
            cout<<(s[r]-s[l-1])<<'\n';
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
    // cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}