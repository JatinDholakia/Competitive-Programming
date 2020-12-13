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
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int> (m));
    For(i, 0, n){
        string tmp;
        cin >> tmp;
        For(j, 0, m){
            if(tmp[j] == '*') a[i][j] = 1;
        }
    }
    For(i, 1, n){
        For(j, 0, m){
            if(a[i][j] == 1 && a[i-1][j] > 0){
                int len = a[i-1][j];
                int left = 1, right = 1;
                while(j+right < m && right <= len){
                    if(a[i][j+right] == 0){
                        break;
                    }
                    right++;
                }
                while(j-left >= 0 && left <= len){
                    if(a[i][j-left] == 0){
                        break;
                    }
                    left++;
                }
                a[i][j] = min(left, right);
            }
        }
    }
    ll ans = 0;
    For(i, 0, n){
        For(j, 0, m){
            ans += a[i][j];
        }
    }
    cout << ans << '\n';
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