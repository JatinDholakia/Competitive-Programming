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

const int N = 10000000;
int lp[N+1];
vector<int> pr;
void primes(){
    for (int i=2; i<=N; ++i) {
        if (lp[i] == 0) {
            lp[i] = i;
            pr.push_back (i);
        }
        for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j)
            lp[i * pr[j]] = pr[j];
    }
}
void solve() {
    int r, c;
    cin >> r >> c;
    if(r == 1 && c == 1){
        cout << 0 << '\n';
        return;
    }
    if(r == 1 || c == 1){
        int cnt = 2;
        For(i, 0, r){
            For(j, 0, c){
                cout << cnt++ << " ";
            }
            cout << '\n';
        }
    }
    else{
        For(i, 1, r+1){
            For(j, 1, c+1){
                cout << i * (j + r) << " ";
            }
            cout << '\n';
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        // freopen("output.txt","w",stdout);
    #endif
    int t = 1;
    primes();
    // cin >> t;
    while(t--) {
      solve();
    }
    return 0;
}