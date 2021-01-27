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
    int n, k;
    cin >> n >> k;
    set<int> s;
    For(i, 0, n){
        int tmp;
        cin >> tmp;
        s.insert(tmp);
    }
    if(s.size() > k){
        cout << -1 << '\n';
        return;
    }    
    cout << n*k << '\n';
    For(i, 0, n){
        for(int x:s){
            cout << x << " ";
        }
        For(j, 0, k-s.size()){
            cout << 1 << " ";
        }
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
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