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
    int n,m;
    cin>>n>>m;
    vector<int> a(n), p(n);
    For(i,0,n){
        cin>>a[i];
    }
    bool ok = 1;
    int ma = a[0];
    int ma2 = 0;
    For(i,0,m){
        int tmp;
        cin>>tmp;
        p[tmp-1] = 1;
    }
    for(int i=1;i<n && ok;i++){
        if(!p[i-1]){
            ma2 = ma;
        }
        if(ma2>a[i]){
            ok = 0;
        }
        ma = max(ma,a[i]);
    }
    if(ok){
        cout<<"YES"<<'\n';
    }
    else{
        cout<<"NO"<<'\n';
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