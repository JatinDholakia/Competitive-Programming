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
    int n, q;
    cin >> n >> q;
    vector<int> A(n+2);
    For(i,1,n+1){
        cin >> A[i];
    }
    ll ans = 0;
    For(i,1,n+1){
        if(A[i] > A[i-1] && A[i] > A[i+1]){
            ans += A[i];
        }
        if(A[i] < A[i-1] && A[i] < A[i+1]){
            ans -= A[i];
        }
    }
    cout << ans << '\n';
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