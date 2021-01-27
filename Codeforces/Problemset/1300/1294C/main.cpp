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
    vector<int> ans(3);
    For(i, 2, 1e5){
        if(n % i == 0){
            ans[0] = i;
            break;
        }
    }
    if(ans[0]) n /= ans[0];
    For(i, 2, 1e5){
        if(n % i == 0 && i != ans[0]){
            ans[1] = i;
            break;
        }
    }
    if(ans[1]) ans[2] = n / ans[1];
    unordered_set<int> s;
    For(i, 0, 3) s.insert(ans[i]);
    if(ans[0] > 1 && ans[1] > 1 && ans[2] > 1 && s.size()==3){
        cout << "YES\n";
        print(ans);
    }
    else{
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
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