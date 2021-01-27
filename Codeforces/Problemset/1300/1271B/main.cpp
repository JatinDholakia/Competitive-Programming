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
    cin >> n;
    int c1 = 0, c2 = 0;
    vector<bool> a(n);
    For(i, 0, n){
        char tmp;
        cin >> tmp;
        if(tmp == 'B'){
            c1++;
            a[i] = 0;
        }
        else{
            c2++;
            a[i] = 1;
        }
    }
    if(c1 % 2 == 1 && c2 % 2 == 1){
        cout << -1 << '\n';
        return;
    }
    vector<int> ans;
    For(i, 0, n-1){
        if(a[i] == 1){
            ans.pb(i+1);
            a[i] = !a[i];
            a[i+1] = !a[i+1];
        }
    }
    if(n % 2 == 1 && a[n-1] == 1){
        For(i, 0, n-1){
            if(i % 2 == 0){
                ans.pb(i + 1);
            }
        }
    }
    cout << ans.size() << '\n';
    print(ans);
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